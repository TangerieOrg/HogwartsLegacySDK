#pragma once
#include <cstdint>
#include "EConjurationContext.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FCachedColovariaComponentInfo.hpp"
#include "FTransfigSlotPool.hpp"
#include "FTransfigurationResource.hpp"
#include "FTransfigurationUnlockSource.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class AActor;
class UVanishmentQueue;
class UPhysicalResponseReporter;
class UTransformAllLoadController;
struct FTransform;
class UFoliageRemoverContainer;
class UClass;
class UWorld;
class ULevel;
class UObject;
class UDeferredChildActorComponent;
#pragma pack(push, 1)
class UTransfigurationManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x808];
    TArray<FCachedColovariaComponentInfo> ColovariaCacheRequiredComponentQueue; // 0x8b0
    TArray<FCachedColovariaComponentInfo> ColovariaCacheAdditionalComponentQueue; // 0x8c0
    UVanishmentQueue* VanishmentQueue; // 0x8d0
    UPhysicalResponseReporter* PhysicalResponseReporter; // 0x8d8
    UTransformAllLoadController* TransformAllController; // 0x8e0
    UFoliageRemoverContainer* FoliageRemoverContainer; // 0x8e8
    char pad_8f0[0x148];
    static UTransfigurationManager* StaticClass();
    static void VanishObject(AActor* InActor, bool bShowEffect, bool bReturnResources, bool bReturnAllRequiredResources, UClass* InPreviewActorClass, bool bDeferNotification);
    static void UnlockTransfigurationItemsForCurriculum();
    static void SpawnAllColorChangeItemsBlueprint();
    AActor* Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    static void SetPowerpointSnappingEnabledBlueprint(bool bIsEnabled);
    static void SetMoveablePlaceholderObjectsEnabled(bool bEnabled);
    static void SetConjurationContextBlueprint(EConjurationContext InContext);
    static void ResetTransfigurationObjectTransform(AActor* InActor);
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnGameToBeSaved();
    void OnDeferredChildActorSpawned(UDeferredChildActorComponent* InChildActorComponent);
    static bool IsVanishmentQueueEmpty();
    static bool IsTransformAllQueueEmpty();
    static bool IsSpawnQueueEmpty();
    static bool HasTransfigSlotAvailableToConjureFromObjectCategory(FName CategoryName, EConjurationContext Context);
    static bool HasEnoughConjurationBudgetToConjure(AActor* InActor);
    static FTransfigurationUnlockSource GetUnlockSourceForLockID_static(FName LockId);
    static TArray<FName> GetTransformationObjectList(FName& CategoryName);
    static TArray<FName> GetTransformationGroups(FName& ObjectName);
    static FName GetTransformationGroupForObject(FName ObjectName);
    static FName GetTransformationCategory(FName& ObjectName);
    static void GetTransfigurationItemsFromLockID(FName LockId, TArray<FName>& ItemNames, TArray<FName>& ItemCategories);
    static void GetTransfigurationItemFromLockID(FName LockId, bool& bUniqueItemFound, FName& ItemName, FName& ItemCategory);
    static FTransfigSlotPool GetTransfigSlotPoolFromObjectCategory(FName CategoryName, bool& bOutPoolExists);
    static FTransfigSlotPool GetTransfigSlotPoolFromClassName(FName ObjectClass, bool& bOutPoolExists);
    static FName GetObjectTransfigSlotIDFromActor(AActor* InActor);
    static int32_t GetObjectCostConjurationBudgetFromActor(AActor* InActor);
    static int32_t GetObjectCostConjurationBudget(FName CategoryName);
    static void GetNumExpansions(EConjurationContext InContext, int32_t& OutNumAvailableExpansions, int32_t& OutNumTotalExpansions);
    static FName GetLockIDForObject(FName inObjectName);
    static int32_t GetLevelConjurationBudget(EConjurationContext Context);
    static EConjurationContext GetConjurationContext();
    static TArray<FName> GetConjurationCategoriesFromStatsCategory(FName InStatsCategory, bool bIgnoreEmptyCategories);
    static void GetConjurationBudgetPerExpansion(EConjurationContext InContext, float& OutMainExpansionBudget, float& OutBudgetPerUnlockableExpansion);
    static int32_t GetConjurationBudgetCurrentlyUsed(EConjurationContext Context);
    static TArray<FName> GetAllTransfigurationLocks(bool bIncludeAlreadyUnlocked);
    static TArray<FName> GetAllTransfigurationCategories();
    static bool DoesTransfigurationObjectExist(int32_t ObjectUID);
    static void ColorObject(AActor* InActor, FName InColorID, bool bShowEffect);
    static bool BP_IsColovariaCacheRequiredQueueEmpty();
    static TArray<FTransfigurationResource> BP_GetResourcesRequiredForCategory(FName CategoryName);
    static TArray<FTransfigurationResource> BP_GetResourcesRequired(FName TypeID);
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0xa38
#pragma pack(pop)

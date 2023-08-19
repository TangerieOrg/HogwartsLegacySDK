#pragma once
#include <cstdint>
#include "ECreatureInteraction.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FGameplayProperty_Float.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class UCreatureScalabilityManager;
class ABiped_Player;
class ACreaturePen;
class UObject;
class ULevel;
class UWorld;
class UCreatureState;
struct FTransform;
class AActor;
struct FSoftObjectPath;
class UCreatureDefinition;
#pragma pack(push, 1)
class UCreatureManager : public UPhxDbRegistryTypeManager {
public:
    char pad_a8[0x348];
    UCreatureScalabilityManager* CreatureScalabilityManager; // 0x3f0
    char pad_3f8[0x50];
    FGameplayProperty_Float ByproductProductionTimeMultiplier; // 0x448
    FGameplayProperty_Float RareVariationSpawnMultiplier; // 0x4d8
    FGameplayProperty_Float BreedRareVariationChanceMultiplier; // 0x568
    TArray<UObject*> PreLoadedAssets; // 0x5f8
    char pad_608[0x188];
    static UCreatureManager* StaticClass();
    void UpdateCreatureName(UCreatureState* CreatureState, FString Name);
    void UnlockAllCreatureToys();
    void TeleportCreatureActorsToPen(ACreaturePen* PenActor);
    bool SummonCreature(UCreatureState* InCreatureState, ABiped_Player* InSummoningPlayer, FString& OutErrorKey);
    AActor* SpawnShell(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel);
    AActor* Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer);
    static TArray<UCreatureState*> SortCreaturesByHappiness(TArray<UCreatureState*> Creatures);
    void SetCreatureInspectedByPlayerUID(int32_t InCreatureUID);
    void ScrapCreature(int32_t InCreatureUID);
    void SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    void SaveCreatureUID(FString InSaveID, int32_t InUIDToSave);
    void RestoreData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID);
    void RemoveSavedCreature(FString InSaveID);
    void RemoveCreatureFromInventory(int32_t InCreatureUID, bool bInRemovedByMission, bool bInSuppressHUDNotification);
    void ReleaseCreatureToNurturingSpace(int32_t InCreatureUID, FName InNurturingSpaceID, ABiped_Player* InReleasingPlayer);
    UCreatureState* RegisterCapturedCreature(FName InTypeID, bool bInIsMale, FName InColorVariation);
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnGameToBeSaved();
    void OnCreatureInteractedWith(AActor* InCreature, ECreatureInteraction InInteractionType, FName InKnowledgeGainedActor, FName InActorInteractedWithTypeID);
    bool IsPenOccupied(int32_t PenUID);
    bool IsCreatureInInventory(int32_t InCreatureUID);
    bool HasCapturedCreatureInventoryEnoughSpace();
    bool GetShellSpawnPath(FString InItemID, FSoftObjectPath& OutPath);
    UCreatureState* GetSavedCreature(FString InSaveID);
    int32_t GetRandomCreatureUIDFromInventory(FName InCreatureTypeID);
    UCreatureState* GetOffspringCreatureInPen(int32_t PenUID);
    int32_t GetNumberOfBreedableCreaturesOfTypeInNurtureSpace(FName TypeID, FName NurturingSpaceID, bool bIncludeMale, bool bIncludeFemale);
    UCreatureState* GetMotherCreatureInPen(int32_t PenUID);
    int32_t GetMaxNumSpeciesInNurturingSpace(FName InNurturingSpaceID);
    int32_t GetMaxNumCreaturesInNurturingSpace(FName InNurturingSpaceID);
    int32_t GetMaxCreatureTierInNurturingSpace(FName InNurturingSpaceID);
    float GetHealth(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID);
    TArray<UCreatureState*> GetHappyCreaturesInSanctuary();
    float GetDeathTimeoutPercentage(FString InCreatureID);
    FName GetCurrentCreatureNurturingSpaceID();
    static int32_t GetCreatureUIDFromVariationName(FName InUIDName);
    int32_t GetCreatureInspectedByPlayerUID();
    int32_t GetCreatureEconomyValue(FName InCreatureUID);
    TArray<UCreatureState*> GetCapturedCreatureStatesOfType(FName InAdultTypeID);
    TArray<int32_t> GetCapturedCreaturesOfType(FName InTypeID);
    int32_t GetCapturedCreatureInventorySize();
    float GetByproductProductionTimeModifier();
    void GetAllCreatureSpeciesInNurturingSpace(FName InNurturingSpaceID);
    TArray<UCreatureState*> GetAllCreaturesInNurturingSpace(FName InNurturingSpaceID, bool bIncludeUnbornCreatures, bool bIncludeEggs, bool bSortByTimeInNurturingSpace);
    TArray<UCreatureDefinition*> GetAllCreatureDefinitions();
    void GetAllCreatureByproducts(int32_t AmountToGrant);
    TArray<FName> GetAllColorVariationsForCreature(FName InTypeID);
    static UCreatureManager* Get();
    AActor* FindCreatureActorByUID(int32_t InCreatureUID);
    void CreatureStateBackup();
    void CreatureSpawnWildMany(FName TypeID, int32_t Count);
    void CreatureSpawnWild(FName TypeID);
    void CreatureSpawnMany(FName TypeID, int32_t Count);
    void CreatureSpawn(FName TypeID);
    void CreatureSimulateCapturePregnant(FName TypeID);
    void CreatureSimulateCapture(FName TypeID, bool bIsMale, FName ColorVariation);
    void CreatureSimulateBreeding(FName TypeID);
    void CreatureResetAllNeeds();
    void CreatureRemoveAll();
    void CreatureRegisterAllCreaturesInLevel();
    void CreaturePetNearest();
    void CreatureMeetAllNeeds();
    void CreatureFeedNearest();
    void CreatureClearCapturedInventory();
    void CreatureAdvancedSpawn(FName TypeID, bool bIsMale, FName ColorVariation, float ScaleVariation, FString CreatureName, int32_t BreedingGeneration);
    void CreatureAddToBiomeIfNeeded(FName InCreatureType, FName InBiomeID);
    void CreatureAddNamedToInventory(FName NamedCreatureID);
    void CreatureAddHappinessToAll(float Amount);
    void CaptureCreature(int32_t InCreatureUID);
    bool CanReleaseCreatureToNurturingSpace(UCreatureState* InCreatureState, FName InNurturingSpaceID, ABiped_Player* InReleasingPlayer, FString& OutErrorKey);
    bool CanCreaturePairBreed(int32_t InCreatureA, int32_t InCreatureB, FString& CreatureAErrorMsg, FString& CreatureBErrorMsg);
    void BreedCreatures(UCreatureState* MotherState, UCreatureState* FatherState, ACreaturePen* CreaturePen);
    void BP_ScrapCreatureByFName(FName InCreatureUID);
    UCreatureState* BP_GetCreatureStateByUID(int32_t InCreatureUID);
    UCreatureState* BP_GetCreatureStateByFName(FName InCreatureUID);
    UCreatureState* BP_GetCreatureStateByActor(AActor* InCreature);
    UCreatureDefinition* BP_GetCreatureDefinitionForActor(AActor* InCreature);
    UCreatureDefinition* BP_GetCreatureDefinitionByType(FName InTypeID);
    void BeginCreatureGrowUp(AActor* InCreature);
    ESpawnAllowedResponse AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent);
}; // Size: 0x790
#pragma pack(pop)

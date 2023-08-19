#include "AActor.hpp"
#include "EConjurationContext.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FCachedColovariaComponentInfo.hpp"
#include "FTransfigSlotPool.hpp"
#include "FTransfigurationResource.hpp"
#include "FTransfigurationUnlockSource.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UDeferredChildActorComponent.hpp"
#include "UFoliageRemoverContainer.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UPhysicalResponseReporter.hpp"
#include "UTransfigurationManager.hpp"
#include "UTransformAllLoadController.hpp"
#include "UVanishmentQueue.hpp"
#include "UWorld.hpp"
UTransfigurationManager* UTransfigurationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationManager");
    return (UTransfigurationManager*)res;
}
void UTransfigurationManager::SetMoveablePlaceholderObjectsEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.SetMoveablePlaceholderObjectsEnabled"));
    struct Params_SetMoveablePlaceholderObjectsEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetMoveablePlaceholderObjectsEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FTransfigurationResource> UTransfigurationManager::BP_GetResourcesRequiredForCategory(FName CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.BP_GetResourcesRequiredForCategory"));
    struct Params_BP_GetResourcesRequiredForCategory {
        FName CategoryName; // 0x0
        TArray<FTransfigurationResource> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_BP_GetResourcesRequiredForCategory params{};
    params.CategoryName = (FName)CategoryName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FTransfigurationResource>)params.ReturnValue;
}
void UTransfigurationManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UTransfigurationManager::VanishObject(AActor* InActor, bool bShowEffect, bool bReturnResources, bool bReturnAllRequiredResources, UClass* InPreviewActorClass, bool bDeferNotification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.VanishObject"));
    struct Params_VanishObject {
        AActor* InActor; // 0x0
        bool bShowEffect; // 0x8
        bool bReturnResources; // 0x9
        bool bReturnAllRequiredResources; // 0xa
        char pad_b[0x5];
        UClass* InPreviewActorClass; // 0x10
        bool bDeferNotification; // 0x18
    }; // Size: 0x19
    Params_VanishObject params{};
    params.InActor = (AActor*)InActor;
    params.bShowEffect = (bool)bShowEffect;
    params.bReturnResources = (bool)bReturnResources;
    params.bReturnAllRequiredResources = (bool)bReturnAllRequiredResources;
    params.InPreviewActorClass = (UClass*)InPreviewActorClass;
    params.bDeferNotification = (bool)bDeferNotification;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTransfigurationManager::SpawnAllColorChangeItemsBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.SpawnAllColorChangeItemsBlueprint"));
    struct Params_SpawnAllColorChangeItemsBlueprint {
    }; // Size: 0x0
    Params_SpawnAllColorChangeItemsBlueprint params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UTransfigurationManager::GetTransformationCategory(FName& ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransformationCategory"));
    struct Params_GetTransformationCategory {
        FName ObjectName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTransformationCategory params{};
    params.ObjectName = (FName)ObjectName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectName = params.ObjectName;
    return (FName)params.ReturnValue;
}
void UTransfigurationManager::UnlockTransfigurationItemsForCurriculum() {}
bool UTransfigurationManager::HasEnoughConjurationBudgetToConjure(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.HasEnoughConjurationBudgetToConjure"));
    struct Params_HasEnoughConjurationBudgetToConjure {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasEnoughConjurationBudgetToConjure params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UTransfigurationManager::Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.Spawn"));
    struct Params_Spawn {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InSpawnTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool bInIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        UObject* InParentContainer; // 0x68
        AActor* ReturnValue; // 0x70
    }; // Size: 0x78
    Params_Spawn params{};
    params.InWorld = (UWorld*)InWorld;
    params.InSpawnTransform = (FTransform)InSpawnTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.bInIsPersistent = (bool)bInIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    params.InParentContainer = (UObject*)InParentContainer;
    ProcessEvent(func, &params);
    InSpawnTransform = params.InSpawnTransform;
    return (AActor*)params.ReturnValue;
}
void UTransfigurationManager::SetPowerpointSnappingEnabledBlueprint(bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.SetPowerpointSnappingEnabledBlueprint"));
    struct Params_SetPowerpointSnappingEnabledBlueprint {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_SetPowerpointSnappingEnabledBlueprint params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTransfigurationManager::SetConjurationContextBlueprint(EConjurationContext InContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.SetConjurationContextBlueprint"));
    struct Params_SetConjurationContextBlueprint {
        EConjurationContext InContext; // 0x0
    }; // Size: 0x1
    Params_SetConjurationContextBlueprint params{};
    params.InContext = (EConjurationContext)InContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ESpawnAllowedResponse UTransfigurationManager::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.AllowSpawn"));
    struct Params_AllowSpawn {
        FString InItemID; // 0x0
        uint32_t inParentUID; // 0x10
        uint32_t inOverrideUID; // 0x14
        bool inIsPersistent; // 0x18
        ESpawnAllowedResponse ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_AllowSpawn params{};
    params.InItemID = (FString)InItemID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    ProcessEvent(func, &params);
    return (ESpawnAllowedResponse)params.ReturnValue;
}
void UTransfigurationManager::ResetTransfigurationObjectTransform(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.ResetTransfigurationObjectTransform"));
    struct Params_ResetTransfigurationObjectTransform {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_ResetTransfigurationObjectTransform params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTransfigurationManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UTransfigurationManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UTransfigurationManager::ColorObject(AActor* InActor, FName InColorID, bool bShowEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.ColorObject"));
    struct Params_ColorObject {
        AActor* InActor; // 0x0
        FName InColorID; // 0x8
        bool bShowEffect; // 0x10
    }; // Size: 0x11
    Params_ColorObject params{};
    params.InActor = (AActor*)InActor;
    params.InColorID = (FName)InColorID;
    params.bShowEffect = (bool)bShowEffect;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FName> UTransfigurationManager::GetAllTransfigurationLocks(bool bIncludeAlreadyUnlocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetAllTransfigurationLocks"));
    struct Params_GetAllTransfigurationLocks {
        bool bIncludeAlreadyUnlocked; // 0x0
        char pad_1[0x7];
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllTransfigurationLocks params{};
    params.bIncludeAlreadyUnlocked = (bool)bIncludeAlreadyUnlocked;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FName UTransfigurationManager::GetObjectTransfigSlotIDFromActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetObjectTransfigSlotIDFromActor"));
    struct Params_GetObjectTransfigSlotIDFromActor {
        AActor* InActor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetObjectTransfigSlotIDFromActor params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UTransfigurationManager::OnDeferredChildActorSpawned(UDeferredChildActorComponent* InChildActorComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.OnDeferredChildActorSpawned"));
    struct Params_OnDeferredChildActorSpawned {
        UDeferredChildActorComponent* InChildActorComponent; // 0x0
    }; // Size: 0x8
    Params_OnDeferredChildActorSpawned params{};
    params.InChildActorComponent = (UDeferredChildActorComponent*)InChildActorComponent;
    ProcessEvent(func, &params);
}
bool UTransfigurationManager::IsVanishmentQueueEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.IsVanishmentQueueEmpty"));
    struct Params_IsVanishmentQueueEmpty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsVanishmentQueueEmpty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTransfigurationManager::IsTransformAllQueueEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.IsTransformAllQueueEmpty"));
    struct Params_IsTransformAllQueueEmpty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTransformAllQueueEmpty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UTransfigurationManager::GetConjurationBudgetCurrentlyUsed(EConjurationContext Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetConjurationBudgetCurrentlyUsed"));
    struct Params_GetConjurationBudgetCurrentlyUsed {
        EConjurationContext Context; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetConjurationBudgetCurrentlyUsed params{};
    params.Context = (EConjurationContext)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UTransfigurationManager::IsSpawnQueueEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.IsSpawnQueueEmpty"));
    struct Params_IsSpawnQueueEmpty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpawnQueueEmpty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UTransfigurationManager::GetConjurationCategoriesFromStatsCategory(FName InStatsCategory, bool bIgnoreEmptyCategories) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetConjurationCategoriesFromStatsCategory"));
    struct Params_GetConjurationCategoriesFromStatsCategory {
        FName InStatsCategory; // 0x0
        bool bIgnoreEmptyCategories; // 0x8
        char pad_9[0x7];
        TArray<FName> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetConjurationCategoriesFromStatsCategory params{};
    params.InStatsCategory = (FName)InStatsCategory;
    params.bIgnoreEmptyCategories = (bool)bIgnoreEmptyCategories;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
int32_t UTransfigurationManager::GetObjectCostConjurationBudget(FName CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetObjectCostConjurationBudget"));
    struct Params_GetObjectCostConjurationBudget {
        FName CategoryName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetObjectCostConjurationBudget params{};
    params.CategoryName = (FName)CategoryName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UTransfigurationManager::HasTransfigSlotAvailableToConjureFromObjectCategory(FName CategoryName, EConjurationContext Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.HasTransfigSlotAvailableToConjureFromObjectCategory"));
    struct Params_HasTransfigSlotAvailableToConjureFromObjectCategory {
        FName CategoryName; // 0x0
        EConjurationContext Context; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_HasTransfigSlotAvailableToConjureFromObjectCategory params{};
    params.CategoryName = (FName)CategoryName;
    params.Context = (EConjurationContext)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UTransfigurationManager::GetAllTransfigurationCategories() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetAllTransfigurationCategories"));
    struct Params_GetAllTransfigurationCategories {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllTransfigurationCategories params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FTransfigurationUnlockSource UTransfigurationManager::GetUnlockSourceForLockID_static(FName LockId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetUnlockSourceForLockID_static"));
    struct Params_GetUnlockSourceForLockID_static {
        FName LockId; // 0x0
        FTransfigurationUnlockSource ReturnValue; // 0x8
    }; // Size: 0x58
    Params_GetUnlockSourceForLockID_static params{};
    params.LockId = (FName)LockId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransfigurationUnlockSource)params.ReturnValue;
}
TArray<FName> UTransfigurationManager::GetTransformationObjectList(FName& CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransformationObjectList"));
    struct Params_GetTransformationObjectList {
        FName CategoryName; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetTransformationObjectList params{};
    params.CategoryName = (FName)CategoryName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CategoryName = params.CategoryName;
    return (TArray<FName>)params.ReturnValue;
}
void UTransfigurationManager::GetConjurationBudgetPerExpansion(EConjurationContext InContext, float& OutMainExpansionBudget, float& OutBudgetPerUnlockableExpansion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetConjurationBudgetPerExpansion"));
    struct Params_GetConjurationBudgetPerExpansion {
        EConjurationContext InContext; // 0x0
        char pad_1[0x3];
        float OutMainExpansionBudget; // 0x4
        float OutBudgetPerUnlockableExpansion; // 0x8
    }; // Size: 0xc
    Params_GetConjurationBudgetPerExpansion params{};
    params.InContext = (EConjurationContext)InContext;
    params.OutMainExpansionBudget = (float)OutMainExpansionBudget;
    params.OutBudgetPerUnlockableExpansion = (float)OutBudgetPerUnlockableExpansion;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutMainExpansionBudget = params.OutMainExpansionBudget;
    OutBudgetPerUnlockableExpansion = params.OutBudgetPerUnlockableExpansion;
}
TArray<FName> UTransfigurationManager::GetTransformationGroups(FName& ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransformationGroups"));
    struct Params_GetTransformationGroups {
        FName ObjectName; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetTransformationGroups params{};
    params.ObjectName = (FName)ObjectName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ObjectName = params.ObjectName;
    return (TArray<FName>)params.ReturnValue;
}
FName UTransfigurationManager::GetTransformationGroupForObject(FName ObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransformationGroupForObject"));
    struct Params_GetTransformationGroupForObject {
        FName ObjectName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTransformationGroupForObject params{};
    params.ObjectName = (FName)ObjectName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UTransfigurationManager::DoesTransfigurationObjectExist(int32_t ObjectUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.DoesTransfigurationObjectExist"));
    struct Params_DoesTransfigurationObjectExist {
        int32_t ObjectUID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DoesTransfigurationObjectExist params{};
    params.ObjectUID = (int32_t)ObjectUID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTransfigurationManager::GetTransfigurationItemsFromLockID(FName LockId, TArray<FName>& ItemNames, TArray<FName>& ItemCategories) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransfigurationItemsFromLockID"));
    struct Params_GetTransfigurationItemsFromLockID {
        FName LockId; // 0x0
        TArray<FName> ItemNames; // 0x8
        TArray<FName> ItemCategories; // 0x18
    }; // Size: 0x28
    Params_GetTransfigurationItemsFromLockID params{};
    params.LockId = (FName)LockId;
    params.ItemNames = (TArray<FName>)ItemNames;
    params.ItemCategories = (TArray<FName>)ItemCategories;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ItemCategories = params.ItemCategories;
    ItemNames = params.ItemNames;
}
void UTransfigurationManager::GetTransfigurationItemFromLockID(FName LockId, bool& bUniqueItemFound, FName& ItemName, FName& ItemCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransfigurationItemFromLockID"));
    struct Params_GetTransfigurationItemFromLockID {
        FName LockId; // 0x0
        bool bUniqueItemFound; // 0x8
        char pad_9[0x3];
        FName ItemName; // 0xc
        FName ItemCategory; // 0x14
    }; // Size: 0x1c
    Params_GetTransfigurationItemFromLockID params{};
    params.LockId = (FName)LockId;
    params.bUniqueItemFound = (bool)bUniqueItemFound;
    params.ItemName = (FName)ItemName;
    params.ItemCategory = (FName)ItemCategory;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bUniqueItemFound = params.bUniqueItemFound;
    ItemName = params.ItemName;
    ItemCategory = params.ItemCategory;
}
bool UTransfigurationManager::BP_IsColovariaCacheRequiredQueueEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.BP_IsColovariaCacheRequiredQueueEmpty"));
    struct Params_BP_IsColovariaCacheRequiredQueueEmpty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_BP_IsColovariaCacheRequiredQueueEmpty params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransfigSlotPool UTransfigurationManager::GetTransfigSlotPoolFromObjectCategory(FName CategoryName, bool& bOutPoolExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransfigSlotPoolFromObjectCategory"));
    struct Params_GetTransfigSlotPoolFromObjectCategory {
        FName CategoryName; // 0x0
        bool bOutPoolExists; // 0x8
        char pad_9[0x7];
        FTransfigSlotPool ReturnValue; // 0x10
    }; // Size: 0x78
    Params_GetTransfigSlotPoolFromObjectCategory params{};
    params.CategoryName = (FName)CategoryName;
    params.bOutPoolExists = (bool)bOutPoolExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bOutPoolExists = params.bOutPoolExists;
    return (FTransfigSlotPool)params.ReturnValue;
}
FTransfigSlotPool UTransfigurationManager::GetTransfigSlotPoolFromClassName(FName ObjectClass, bool& bOutPoolExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetTransfigSlotPoolFromClassName"));
    struct Params_GetTransfigSlotPoolFromClassName {
        FName ObjectClass; // 0x0
        bool bOutPoolExists; // 0x8
        char pad_9[0x7];
        FTransfigSlotPool ReturnValue; // 0x10
    }; // Size: 0x78
    Params_GetTransfigSlotPoolFromClassName params{};
    params.ObjectClass = (FName)ObjectClass;
    params.bOutPoolExists = (bool)bOutPoolExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bOutPoolExists = params.bOutPoolExists;
    return (FTransfigSlotPool)params.ReturnValue;
}
int32_t UTransfigurationManager::GetObjectCostConjurationBudgetFromActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetObjectCostConjurationBudgetFromActor"));
    struct Params_GetObjectCostConjurationBudgetFromActor {
        AActor* InActor; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetObjectCostConjurationBudgetFromActor params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UTransfigurationManager::GetNumExpansions(EConjurationContext InContext, int32_t& OutNumAvailableExpansions, int32_t& OutNumTotalExpansions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetNumExpansions"));
    struct Params_GetNumExpansions {
        EConjurationContext InContext; // 0x0
        char pad_1[0x3];
        int32_t OutNumAvailableExpansions; // 0x4
        int32_t OutNumTotalExpansions; // 0x8
    }; // Size: 0xc
    Params_GetNumExpansions params{};
    params.InContext = (EConjurationContext)InContext;
    params.OutNumAvailableExpansions = (int32_t)OutNumAvailableExpansions;
    params.OutNumTotalExpansions = (int32_t)OutNumTotalExpansions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutNumAvailableExpansions = params.OutNumAvailableExpansions;
    OutNumTotalExpansions = params.OutNumTotalExpansions;
}
FName UTransfigurationManager::GetLockIDForObject(FName inObjectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetLockIDForObject"));
    struct Params_GetLockIDForObject {
        FName inObjectName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLockIDForObject params{};
    params.inObjectName = (FName)inObjectName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UTransfigurationManager::GetLevelConjurationBudget(EConjurationContext Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetLevelConjurationBudget"));
    struct Params_GetLevelConjurationBudget {
        EConjurationContext Context; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetLevelConjurationBudget params{};
    params.Context = (EConjurationContext)Context;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EConjurationContext UTransfigurationManager::GetConjurationContext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.GetConjurationContext"));
    struct Params_GetConjurationContext {
        EConjurationContext ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetConjurationContext params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EConjurationContext)params.ReturnValue;
}
TArray<FTransfigurationResource> UTransfigurationManager::BP_GetResourcesRequired(FName TypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationManager.BP_GetResourcesRequired"));
    struct Params_BP_GetResourcesRequired {
        FName TypeID; // 0x0
        TArray<FTransfigurationResource> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_BP_GetResourcesRequired params{};
    params.TypeID = (FName)TypeID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FTransfigurationResource>)params.ReturnValue;
}

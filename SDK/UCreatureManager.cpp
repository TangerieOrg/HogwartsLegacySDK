#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACreaturePen.hpp"
#include "ECreatureInteraction.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FSoftObjectPath.hpp"
#include "FTransform.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureScalabilityManager.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UWorld.hpp"
AActor* UCreatureManager::SpawnShell(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.SpawnShell"));
    struct Params_SpawnShell {
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
        AActor* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnShell params{};
    params.InWorld = (UWorld*)InWorld;
    params.InSpawnTransform = (FTransform)InSpawnTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.bInIsPersistent = (bool)bInIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    ProcessEvent(func, &params);
    InSpawnTransform = params.InSpawnTransform;
    return (AActor*)params.ReturnValue;
}
bool UCreatureManager::SummonCreature(UCreatureState* InCreatureState, ABiped_Player* InSummoningPlayer, FString& OutErrorKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.SummonCreature"));
    struct Params_SummonCreature {
        UCreatureState* InCreatureState; // 0x0
        ABiped_Player* InSummoningPlayer; // 0x8
        FString OutErrorKey; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SummonCreature params{};
    params.InCreatureState = (UCreatureState*)InCreatureState;
    params.InSummoningPlayer = (ABiped_Player*)InSummoningPlayer;
    params.OutErrorKey = (FString)OutErrorKey;
    ProcessEvent(func, &params);
    OutErrorKey = params.OutErrorKey;
    return (bool)params.ReturnValue;
}
UCreatureManager* UCreatureManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureManager");
    return (UCreatureManager*)res;
}
void UCreatureManager::TeleportCreatureActorsToPen(ACreaturePen* PenActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.TeleportCreatureActorsToPen"));
    struct Params_TeleportCreatureActorsToPen {
        ACreaturePen* PenActor; // 0x0
    }; // Size: 0x8
    Params_TeleportCreatureActorsToPen params{};
    params.PenActor = (ACreaturePen*)PenActor;
    ProcessEvent(func, &params);
}
UCreatureDefinition* UCreatureManager::BP_GetCreatureDefinitionForActor(AActor* InCreature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BP_GetCreatureDefinitionForActor"));
    struct Params_BP_GetCreatureDefinitionForActor {
        AActor* InCreature; // 0x0
        UCreatureDefinition* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_BP_GetCreatureDefinitionForActor params{};
    params.InCreature = (AActor*)InCreature;
    ProcessEvent(func, &params);
    return (UCreatureDefinition*)params.ReturnValue;
}
void UCreatureManager::CreatureResetAllNeeds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureResetAllNeeds"));
    struct Params_CreatureResetAllNeeds {
    }; // Size: 0x0
    Params_CreatureResetAllNeeds params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::UpdateCreatureName(UCreatureState* CreatureState, FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.UpdateCreatureName"));
    struct Params_UpdateCreatureName {
        UCreatureState* CreatureState; // 0x0
        FString Name; // 0x8
    }; // Size: 0x18
    Params_UpdateCreatureName params{};
    params.CreatureState = (UCreatureState*)CreatureState;
    params.Name = (FString)Name;
    ProcessEvent(func, &params);
}
bool UCreatureManager::HasCapturedCreatureInventoryEnoughSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.HasCapturedCreatureInventoryEnoughSpace"));
    struct Params_HasCapturedCreatureInventoryEnoughSpace {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasCapturedCreatureInventoryEnoughSpace params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UCreatureManager::Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.Spawn"));
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
void UCreatureManager::UnlockAllCreatureToys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.UnlockAllCreatureToys"));
    struct Params_UnlockAllCreatureToys {
    }; // Size: 0x0
    Params_UnlockAllCreatureToys params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::OnCreatureInteractedWith(AActor* InCreature, ECreatureInteraction InInteractionType, FName InKnowledgeGainedActor, FName InActorInteractedWithTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.OnCreatureInteractedWith"));
    struct Params_OnCreatureInteractedWith {
        AActor* InCreature; // 0x0
        ECreatureInteraction InInteractionType; // 0x8
        char pad_9[0x3];
        FName InKnowledgeGainedActor; // 0xc
        FName InActorInteractedWithTypeID; // 0x14
    }; // Size: 0x1c
    Params_OnCreatureInteractedWith params{};
    params.InCreature = (AActor*)InCreature;
    params.InInteractionType = (ECreatureInteraction)InInteractionType;
    params.InKnowledgeGainedActor = (FName)InKnowledgeGainedActor;
    params.InActorInteractedWithTypeID = (FName)InActorInteractedWithTypeID;
    ProcessEvent(func, &params);
}
void UCreatureManager::RemoveSavedCreature(FString InSaveID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.RemoveSavedCreature"));
    struct Params_RemoveSavedCreature {
        FString InSaveID; // 0x0
    }; // Size: 0x10
    Params_RemoveSavedCreature params{};
    params.InSaveID = (FString)InSaveID;
    ProcessEvent(func, &params);
}
TArray<UCreatureState*> UCreatureManager::SortCreaturesByHappiness(TArray<UCreatureState*> Creatures) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.SortCreaturesByHappiness"));
    struct Params_SortCreaturesByHappiness {
        TArray<UCreatureState*> Creatures; // 0x0
        TArray<UCreatureState*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SortCreaturesByHappiness params{};
    params.Creatures = (TArray<UCreatureState*>)Creatures;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UCreatureState*>)params.ReturnValue;
}
void UCreatureManager::SetCreatureInspectedByPlayerUID(int32_t InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.SetCreatureInspectedByPlayerUID"));
    struct Params_SetCreatureInspectedByPlayerUID {
        int32_t InCreatureUID; // 0x0
    }; // Size: 0x4
    Params_SetCreatureInspectedByPlayerUID params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    ProcessEvent(func, &params);
}
void UCreatureManager::ScrapCreature(int32_t InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.ScrapCreature"));
    struct Params_ScrapCreature {
        int32_t InCreatureUID; // 0x0
    }; // Size: 0x4
    Params_ScrapCreature params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    ProcessEvent(func, &params);
}
void UCreatureManager::GetAllCreatureByproducts(int32_t AmountToGrant) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetAllCreatureByproducts"));
    struct Params_GetAllCreatureByproducts {
        int32_t AmountToGrant; // 0x0
    }; // Size: 0x4
    Params_GetAllCreatureByproducts params{};
    params.AmountToGrant = (int32_t)AmountToGrant;
    ProcessEvent(func, &params);
}
int32_t UCreatureManager::GetCreatureInspectedByPlayerUID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCreatureInspectedByPlayerUID"));
    struct Params_GetCreatureInspectedByPlayerUID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCreatureInspectedByPlayerUID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UCreatureManager::GetCreatureUIDFromVariationName(FName InUIDName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCreatureUIDFromVariationName"));
    struct Params_GetCreatureUIDFromVariationName {
        FName InUIDName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCreatureUIDFromVariationName params{};
    params.InUIDName = (FName)InUIDName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UCreatureManager::SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.SaveData"));
    struct Params_SaveData {
        FString InItemID; // 0x0
        AActor* TargetActor; // 0x10
        uint32_t inParentUID; // 0x18
        uint32_t inOverrideUID; // 0x1c
    }; // Size: 0x20
    Params_SaveData params{};
    params.InItemID = (FString)InItemID;
    params.TargetActor = (AActor*)TargetActor;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
}
void UCreatureManager::SaveCreatureUID(FString InSaveID, int32_t InUIDToSave) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.SaveCreatureUID"));
    struct Params_SaveCreatureUID {
        FString InSaveID; // 0x0
        int32_t InUIDToSave; // 0x10
    }; // Size: 0x14
    Params_SaveCreatureUID params{};
    params.InSaveID = (FString)InSaveID;
    params.InUIDToSave = (int32_t)InUIDToSave;
    ProcessEvent(func, &params);
}
TArray<FName> UCreatureManager::GetAllColorVariationsForCreature(FName InTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetAllColorVariationsForCreature"));
    struct Params_GetAllColorVariationsForCreature {
        FName InTypeID; // 0x0
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAllColorVariationsForCreature params{};
    params.InTypeID = (FName)InTypeID;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
void UCreatureManager::CreatureAdvancedSpawn(FName TypeID, bool bIsMale, FName ColorVariation, float ScaleVariation, FString CreatureName, int32_t BreedingGeneration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureAdvancedSpawn"));
    struct Params_CreatureAdvancedSpawn {
        FName TypeID; // 0x0
        bool bIsMale; // 0x8
        char pad_9[0x3];
        FName ColorVariation; // 0xc
        float ScaleVariation; // 0x14
        FString CreatureName; // 0x18
        int32_t BreedingGeneration; // 0x28
    }; // Size: 0x2c
    Params_CreatureAdvancedSpawn params{};
    params.TypeID = (FName)TypeID;
    params.bIsMale = (bool)bIsMale;
    params.ColorVariation = (FName)ColorVariation;
    params.ScaleVariation = (float)ScaleVariation;
    params.CreatureName = (FString)CreatureName;
    params.BreedingGeneration = (int32_t)BreedingGeneration;
    ProcessEvent(func, &params);
}
void UCreatureManager::RestoreData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.RestoreData"));
    struct Params_RestoreData {
        FString InItemID; // 0x0
        AActor* TargetActor; // 0x10
        uint32_t inParentUID; // 0x18
        uint32_t inOverrideUID; // 0x1c
    }; // Size: 0x20
    Params_RestoreData params{};
    params.InItemID = (FString)InItemID;
    params.TargetActor = (AActor*)TargetActor;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureFeedNearest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureFeedNearest"));
    struct Params_CreatureFeedNearest {
    }; // Size: 0x0
    Params_CreatureFeedNearest params{};
    ProcessEvent(func, &params);
}
TArray<UCreatureState*> UCreatureManager::GetAllCreaturesInNurturingSpace(FName InNurturingSpaceID, bool bIncludeUnbornCreatures, bool bIncludeEggs, bool bSortByTimeInNurturingSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetAllCreaturesInNurturingSpace"));
    struct Params_GetAllCreaturesInNurturingSpace {
        FName InNurturingSpaceID; // 0x0
        bool bIncludeUnbornCreatures; // 0x8
        bool bIncludeEggs; // 0x9
        bool bSortByTimeInNurturingSpace; // 0xa
        char pad_b[0x5];
        TArray<UCreatureState*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetAllCreaturesInNurturingSpace params{};
    params.InNurturingSpaceID = (FName)InNurturingSpaceID;
    params.bIncludeUnbornCreatures = (bool)bIncludeUnbornCreatures;
    params.bIncludeEggs = (bool)bIncludeEggs;
    params.bSortByTimeInNurturingSpace = (bool)bSortByTimeInNurturingSpace;
    ProcessEvent(func, &params);
    return (TArray<UCreatureState*>)params.ReturnValue;
}
void UCreatureManager::RemoveCreatureFromInventory(int32_t InCreatureUID, bool bInRemovedByMission, bool bInSuppressHUDNotification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.RemoveCreatureFromInventory"));
    struct Params_RemoveCreatureFromInventory {
        int32_t InCreatureUID; // 0x0
        bool bInRemovedByMission; // 0x4
        bool bInSuppressHUDNotification; // 0x5
    }; // Size: 0x6
    Params_RemoveCreatureFromInventory params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    params.bInRemovedByMission = (bool)bInRemovedByMission;
    params.bInSuppressHUDNotification = (bool)bInSuppressHUDNotification;
    ProcessEvent(func, &params);
}
void UCreatureManager::ReleaseCreatureToNurturingSpace(int32_t InCreatureUID, FName InNurturingSpaceID, ABiped_Player* InReleasingPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.ReleaseCreatureToNurturingSpace"));
    struct Params_ReleaseCreatureToNurturingSpace {
        int32_t InCreatureUID; // 0x0
        FName InNurturingSpaceID; // 0x4
        char pad_c[0x4];
        ABiped_Player* InReleasingPlayer; // 0x10
    }; // Size: 0x18
    Params_ReleaseCreatureToNurturingSpace params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    params.InNurturingSpaceID = (FName)InNurturingSpaceID;
    params.InReleasingPlayer = (ABiped_Player*)InReleasingPlayer;
    ProcessEvent(func, &params);
}
TArray<int32_t> UCreatureManager::GetCapturedCreaturesOfType(FName InTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCapturedCreaturesOfType"));
    struct Params_GetCapturedCreaturesOfType {
        FName InTypeID; // 0x0
        TArray<int32_t> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCapturedCreaturesOfType params{};
    params.InTypeID = (FName)InTypeID;
    ProcessEvent(func, &params);
    return (TArray<int32_t>)params.ReturnValue;
}
UCreatureState* UCreatureManager::RegisterCapturedCreature(FName InTypeID, bool bInIsMale, FName InColorVariation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.RegisterCapturedCreature"));
    struct Params_RegisterCapturedCreature {
        FName InTypeID; // 0x0
        bool bInIsMale; // 0x8
        char pad_9[0x3];
        FName InColorVariation; // 0xc
        char pad_14[0x4];
        UCreatureState* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_RegisterCapturedCreature params{};
    params.InTypeID = (FName)InTypeID;
    params.bInIsMale = (bool)bInIsMale;
    params.InColorVariation = (FName)InColorVariation;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
void UCreatureManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::GetAllCreatureSpeciesInNurturingSpace(FName InNurturingSpaceID) {}
UCreatureState* UCreatureManager::GetMotherCreatureInPen(int32_t PenUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetMotherCreatureInPen"));
    struct Params_GetMotherCreatureInPen {
        int32_t PenUID; // 0x0
        char pad_4[0x4];
        UCreatureState* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMotherCreatureInPen params{};
    params.PenUID = (int32_t)PenUID;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
void UCreatureManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureRemoveAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureRemoveAll"));
    struct Params_CreatureRemoveAll {
    }; // Size: 0x0
    Params_CreatureRemoveAll params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureSpawnWildMany(FName TypeID, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSpawnWildMany"));
    struct Params_CreatureSpawnWildMany {
        FName TypeID; // 0x0
        int32_t Count; // 0x8
    }; // Size: 0xc
    Params_CreatureSpawnWildMany params{};
    params.TypeID = (FName)TypeID;
    params.Count = (int32_t)Count;
    ProcessEvent(func, &params);
}
TArray<UCreatureState*> UCreatureManager::GetHappyCreaturesInSanctuary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetHappyCreaturesInSanctuary"));
    struct Params_GetHappyCreaturesInSanctuary {
        TArray<UCreatureState*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetHappyCreaturesInSanctuary params{};
    ProcessEvent(func, &params);
    return (TArray<UCreatureState*>)params.ReturnValue;
}
void UCreatureManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
bool UCreatureManager::IsPenOccupied(int32_t PenUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.IsPenOccupied"));
    struct Params_IsPenOccupied {
        int32_t PenUID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsPenOccupied params{};
    params.PenUID = (int32_t)PenUID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureManager::IsCreatureInInventory(int32_t InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.IsCreatureInInventory"));
    struct Params_IsCreatureInInventory {
        int32_t InCreatureUID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsCreatureInInventory params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreatureManager::CreatureSimulateCapture(FName TypeID, bool bIsMale, FName ColorVariation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSimulateCapture"));
    struct Params_CreatureSimulateCapture {
        FName TypeID; // 0x0
        bool bIsMale; // 0x8
        char pad_9[0x3];
        FName ColorVariation; // 0xc
    }; // Size: 0x14
    Params_CreatureSimulateCapture params{};
    params.TypeID = (FName)TypeID;
    params.bIsMale = (bool)bIsMale;
    params.ColorVariation = (FName)ColorVariation;
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureStateBackup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureStateBackup"));
    struct Params_CreatureStateBackup {
    }; // Size: 0x0
    Params_CreatureStateBackup params{};
    ProcessEvent(func, &params);
}
bool UCreatureManager::GetShellSpawnPath(FString InItemID, FSoftObjectPath& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetShellSpawnPath"));
    struct Params_GetShellSpawnPath {
        FString InItemID; // 0x0
        FSoftObjectPath OutPath; // 0x10
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetShellSpawnPath params{};
    params.InItemID = (FString)InItemID;
    params.OutPath = (FSoftObjectPath)OutPath;
    ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
UCreatureState* UCreatureManager::GetSavedCreature(FString InSaveID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetSavedCreature"));
    struct Params_GetSavedCreature {
        FString InSaveID; // 0x0
        UCreatureState* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetSavedCreature params{};
    params.InSaveID = (FString)InSaveID;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
int32_t UCreatureManager::GetRandomCreatureUIDFromInventory(FName InCreatureTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetRandomCreatureUIDFromInventory"));
    struct Params_GetRandomCreatureUIDFromInventory {
        FName InCreatureTypeID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRandomCreatureUIDFromInventory params{};
    params.InCreatureTypeID = (FName)InCreatureTypeID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UCreatureState* UCreatureManager::GetOffspringCreatureInPen(int32_t PenUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetOffspringCreatureInPen"));
    struct Params_GetOffspringCreatureInPen {
        int32_t PenUID; // 0x0
        char pad_4[0x4];
        UCreatureState* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetOffspringCreatureInPen params{};
    params.PenUID = (int32_t)PenUID;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
AActor* UCreatureManager::FindCreatureActorByUID(int32_t InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.FindCreatureActorByUID"));
    struct Params_FindCreatureActorByUID {
        int32_t InCreatureUID; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_FindCreatureActorByUID params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
int32_t UCreatureManager::GetCapturedCreatureInventorySize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCapturedCreatureInventorySize"));
    struct Params_GetCapturedCreatureInventorySize {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCapturedCreatureInventorySize params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UCreatureManager::GetHealth(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetHealth"));
    struct Params_GetHealth {
        FString InItemID; // 0x0
        uint32_t inParentUID; // 0x10
        uint32_t inOverrideUID; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetHealth params{};
    params.InItemID = (FString)InItemID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UCreatureManager::GetNumberOfBreedableCreaturesOfTypeInNurtureSpace(FName TypeID, FName NurturingSpaceID, bool bIncludeMale, bool bIncludeFemale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetNumberOfBreedableCreaturesOfTypeInNurtureSpace"));
    struct Params_GetNumberOfBreedableCreaturesOfTypeInNurtureSpace {
        FName TypeID; // 0x0
        FName NurturingSpaceID; // 0x8
        bool bIncludeMale; // 0x10
        bool bIncludeFemale; // 0x11
        char pad_12[0x2];
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetNumberOfBreedableCreaturesOfTypeInNurtureSpace params{};
    params.TypeID = (FName)TypeID;
    params.NurturingSpaceID = (FName)NurturingSpaceID;
    params.bIncludeMale = (bool)bIncludeMale;
    params.bIncludeFemale = (bool)bIncludeFemale;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UCreatureManager::CreatureSpawnWild(FName TypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSpawnWild"));
    struct Params_CreatureSpawnWild {
        FName TypeID; // 0x0
    }; // Size: 0x8
    Params_CreatureSpawnWild params{};
    params.TypeID = (FName)TypeID;
    ProcessEvent(func, &params);
}
int32_t UCreatureManager::GetMaxNumSpeciesInNurturingSpace(FName InNurturingSpaceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetMaxNumSpeciesInNurturingSpace"));
    struct Params_GetMaxNumSpeciesInNurturingSpace {
        FName InNurturingSpaceID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaxNumSpeciesInNurturingSpace params{};
    params.InNurturingSpaceID = (FName)InNurturingSpaceID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UCreatureManager::GetMaxNumCreaturesInNurturingSpace(FName InNurturingSpaceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetMaxNumCreaturesInNurturingSpace"));
    struct Params_GetMaxNumCreaturesInNurturingSpace {
        FName InNurturingSpaceID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaxNumCreaturesInNurturingSpace params{};
    params.InNurturingSpaceID = (FName)InNurturingSpaceID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UCreatureManager::GetMaxCreatureTierInNurturingSpace(FName InNurturingSpaceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetMaxCreatureTierInNurturingSpace"));
    struct Params_GetMaxCreatureTierInNurturingSpace {
        FName InNurturingSpaceID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMaxCreatureTierInNurturingSpace params{};
    params.InNurturingSpaceID = (FName)InNurturingSpaceID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreatureManager::CanCreaturePairBreed(int32_t InCreatureA, int32_t InCreatureB, FString& CreatureAErrorMsg, FString& CreatureBErrorMsg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CanCreaturePairBreed"));
    struct Params_CanCreaturePairBreed {
        int32_t InCreatureA; // 0x0
        int32_t InCreatureB; // 0x4
        FString CreatureAErrorMsg; // 0x8
        FString CreatureBErrorMsg; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_CanCreaturePairBreed params{};
    params.InCreatureA = (int32_t)InCreatureA;
    params.InCreatureB = (int32_t)InCreatureB;
    params.CreatureAErrorMsg = (FString)CreatureAErrorMsg;
    params.CreatureBErrorMsg = (FString)CreatureBErrorMsg;
    ProcessEvent(func, &params);
    CreatureAErrorMsg = params.CreatureAErrorMsg;
    CreatureBErrorMsg = params.CreatureBErrorMsg;
    return (bool)params.ReturnValue;
}
float UCreatureManager::GetDeathTimeoutPercentage(FString InCreatureID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetDeathTimeoutPercentage"));
    struct Params_GetDeathTimeoutPercentage {
        FString InCreatureID; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetDeathTimeoutPercentage params{};
    params.InCreatureID = (FString)InCreatureID;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UCreatureState* UCreatureManager::BP_GetCreatureStateByFName(FName InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BP_GetCreatureStateByFName"));
    struct Params_BP_GetCreatureStateByFName {
        FName InCreatureUID; // 0x0
        UCreatureState* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_BP_GetCreatureStateByFName params{};
    params.InCreatureUID = (FName)InCreatureUID;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
void UCreatureManager::CreatureSpawnMany(FName TypeID, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSpawnMany"));
    struct Params_CreatureSpawnMany {
        FName TypeID; // 0x0
        int32_t Count; // 0x8
    }; // Size: 0xc
    Params_CreatureSpawnMany params{};
    params.TypeID = (FName)TypeID;
    params.Count = (int32_t)Count;
    ProcessEvent(func, &params);
}
FName UCreatureManager::GetCurrentCreatureNurturingSpaceID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCurrentCreatureNurturingSpaceID"));
    struct Params_GetCurrentCreatureNurturingSpaceID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentCreatureNurturingSpaceID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UCreatureState* UCreatureManager::BP_GetCreatureStateByUID(int32_t InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BP_GetCreatureStateByUID"));
    struct Params_BP_GetCreatureStateByUID {
        int32_t InCreatureUID; // 0x0
        char pad_4[0x4];
        UCreatureState* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_BP_GetCreatureStateByUID params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
int32_t UCreatureManager::GetCreatureEconomyValue(FName InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCreatureEconomyValue"));
    struct Params_GetCreatureEconomyValue {
        FName InCreatureUID; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCreatureEconomyValue params{};
    params.InCreatureUID = (FName)InCreatureUID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<UCreatureState*> UCreatureManager::GetCapturedCreatureStatesOfType(FName InAdultTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetCapturedCreatureStatesOfType"));
    struct Params_GetCapturedCreatureStatesOfType {
        FName InAdultTypeID; // 0x0
        TArray<UCreatureState*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCapturedCreatureStatesOfType params{};
    params.InAdultTypeID = (FName)InAdultTypeID;
    ProcessEvent(func, &params);
    return (TArray<UCreatureState*>)params.ReturnValue;
}
float UCreatureManager::GetByproductProductionTimeModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetByproductProductionTimeModifier"));
    struct Params_GetByproductProductionTimeModifier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetByproductProductionTimeModifier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<UCreatureDefinition*> UCreatureManager::GetAllCreatureDefinitions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.GetAllCreatureDefinitions"));
    struct Params_GetAllCreatureDefinitions {
        TArray<UCreatureDefinition*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllCreatureDefinitions params{};
    ProcessEvent(func, &params);
    return (TArray<UCreatureDefinition*>)params.ReturnValue;
}
UCreatureManager* UCreatureManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.Get"));
    struct Params_Get {
        UCreatureManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCreatureManager*)params.ReturnValue;
}
void UCreatureManager::CreatureSpawn(FName TypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSpawn"));
    struct Params_CreatureSpawn {
        FName TypeID; // 0x0
    }; // Size: 0x8
    Params_CreatureSpawn params{};
    params.TypeID = (FName)TypeID;
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureSimulateCapturePregnant(FName TypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSimulateCapturePregnant"));
    struct Params_CreatureSimulateCapturePregnant {
        FName TypeID; // 0x0
    }; // Size: 0x8
    Params_CreatureSimulateCapturePregnant params{};
    params.TypeID = (FName)TypeID;
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureSimulateBreeding(FName TypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureSimulateBreeding"));
    struct Params_CreatureSimulateBreeding {
        FName TypeID; // 0x0
    }; // Size: 0x8
    Params_CreatureSimulateBreeding params{};
    params.TypeID = (FName)TypeID;
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureRegisterAllCreaturesInLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureRegisterAllCreaturesInLevel"));
    struct Params_CreatureRegisterAllCreaturesInLevel {
    }; // Size: 0x0
    Params_CreatureRegisterAllCreaturesInLevel params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::CreaturePetNearest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreaturePetNearest"));
    struct Params_CreaturePetNearest {
    }; // Size: 0x0
    Params_CreaturePetNearest params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureMeetAllNeeds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureMeetAllNeeds"));
    struct Params_CreatureMeetAllNeeds {
    }; // Size: 0x0
    Params_CreatureMeetAllNeeds params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureClearCapturedInventory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureClearCapturedInventory"));
    struct Params_CreatureClearCapturedInventory {
    }; // Size: 0x0
    Params_CreatureClearCapturedInventory params{};
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureAddToBiomeIfNeeded(FName InCreatureType, FName InBiomeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureAddToBiomeIfNeeded"));
    struct Params_CreatureAddToBiomeIfNeeded {
        FName InCreatureType; // 0x0
        FName InBiomeID; // 0x8
    }; // Size: 0x10
    Params_CreatureAddToBiomeIfNeeded params{};
    params.InCreatureType = (FName)InCreatureType;
    params.InBiomeID = (FName)InBiomeID;
    ProcessEvent(func, &params);
}
ESpawnAllowedResponse UCreatureManager::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.AllowSpawn"));
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
void UCreatureManager::CreatureAddNamedToInventory(FName NamedCreatureID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureAddNamedToInventory"));
    struct Params_CreatureAddNamedToInventory {
        FName NamedCreatureID; // 0x0
    }; // Size: 0x8
    Params_CreatureAddNamedToInventory params{};
    params.NamedCreatureID = (FName)NamedCreatureID;
    ProcessEvent(func, &params);
}
void UCreatureManager::CreatureAddHappinessToAll(float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CreatureAddHappinessToAll"));
    struct Params_CreatureAddHappinessToAll {
        float Amount; // 0x0
    }; // Size: 0x4
    Params_CreatureAddHappinessToAll params{};
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
}
void UCreatureManager::CaptureCreature(int32_t InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CaptureCreature"));
    struct Params_CaptureCreature {
        int32_t InCreatureUID; // 0x0
    }; // Size: 0x4
    Params_CaptureCreature params{};
    params.InCreatureUID = (int32_t)InCreatureUID;
    ProcessEvent(func, &params);
}
bool UCreatureManager::CanReleaseCreatureToNurturingSpace(UCreatureState* InCreatureState, FName InNurturingSpaceID, ABiped_Player* InReleasingPlayer, FString& OutErrorKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.CanReleaseCreatureToNurturingSpace"));
    struct Params_CanReleaseCreatureToNurturingSpace {
        UCreatureState* InCreatureState; // 0x0
        FName InNurturingSpaceID; // 0x8
        ABiped_Player* InReleasingPlayer; // 0x10
        FString OutErrorKey; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_CanReleaseCreatureToNurturingSpace params{};
    params.InCreatureState = (UCreatureState*)InCreatureState;
    params.InNurturingSpaceID = (FName)InNurturingSpaceID;
    params.InReleasingPlayer = (ABiped_Player*)InReleasingPlayer;
    params.OutErrorKey = (FString)OutErrorKey;
    ProcessEvent(func, &params);
    OutErrorKey = params.OutErrorKey;
    return (bool)params.ReturnValue;
}
void UCreatureManager::BreedCreatures(UCreatureState* MotherState, UCreatureState* FatherState, ACreaturePen* CreaturePen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BreedCreatures"));
    struct Params_BreedCreatures {
        UCreatureState* MotherState; // 0x0
        UCreatureState* FatherState; // 0x8
        ACreaturePen* CreaturePen; // 0x10
    }; // Size: 0x18
    Params_BreedCreatures params{};
    params.MotherState = (UCreatureState*)MotherState;
    params.FatherState = (UCreatureState*)FatherState;
    params.CreaturePen = (ACreaturePen*)CreaturePen;
    ProcessEvent(func, &params);
}
void UCreatureManager::BP_ScrapCreatureByFName(FName InCreatureUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BP_ScrapCreatureByFName"));
    struct Params_BP_ScrapCreatureByFName {
        FName InCreatureUID; // 0x0
    }; // Size: 0x8
    Params_BP_ScrapCreatureByFName params{};
    params.InCreatureUID = (FName)InCreatureUID;
    ProcessEvent(func, &params);
}
UCreatureState* UCreatureManager::BP_GetCreatureStateByActor(AActor* InCreature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BP_GetCreatureStateByActor"));
    struct Params_BP_GetCreatureStateByActor {
        AActor* InCreature; // 0x0
        UCreatureState* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_BP_GetCreatureStateByActor params{};
    params.InCreature = (AActor*)InCreature;
    ProcessEvent(func, &params);
    return (UCreatureState*)params.ReturnValue;
}
UCreatureDefinition* UCreatureManager::BP_GetCreatureDefinitionByType(FName InTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BP_GetCreatureDefinitionByType"));
    struct Params_BP_GetCreatureDefinitionByType {
        FName InTypeID; // 0x0
        UCreatureDefinition* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_BP_GetCreatureDefinitionByType params{};
    params.InTypeID = (FName)InTypeID;
    ProcessEvent(func, &params);
    return (UCreatureDefinition*)params.ReturnValue;
}
void UCreatureManager::BeginCreatureGrowUp(AActor* InCreature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureManager.BeginCreatureGrowUp"));
    struct Params_BeginCreatureGrowUp {
        AActor* InCreature; // 0x0
    }; // Size: 0x8
    Params_BeginCreatureGrowUp params{};
    params.InCreature = (AActor*)InCreature;
    ProcessEvent(func, &params);
}

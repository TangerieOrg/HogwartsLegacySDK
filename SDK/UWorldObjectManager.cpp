#include "AActor.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UWorld.hpp"
#include "UWorldObjectManager.hpp"
UWorldObjectManager* UWorldObjectManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldObjectManager");
    return (UWorldObjectManager*)res;
}
AActor* UWorldObjectManager::Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldObjectManager.Spawn"));
    struct Params_Spawn {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool inIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        UObject* InParentContainer; // 0x68
        AActor* ReturnValue; // 0x70
    }; // Size: 0x78
    Params_Spawn params{};
    params.InWorld = (UWorld*)InWorld;
    params.InTransform = (FTransform)InTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    params.InParentContainer = (UObject*)InParentContainer;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
void UWorldObjectManager::SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldObjectManager.SaveData"));
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
ESpawnAllowedResponse UWorldObjectManager::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldObjectManager.AllowSpawn"));
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

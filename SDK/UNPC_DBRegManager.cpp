#include "AActor.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FSoftObjectPath.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UNPC_DBRegManager.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UWorld.hpp"
AActor* UNPC_DBRegManager::Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod inCollisioinMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.Spawn"));
    struct Params_Spawn {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool inIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod inCollisioinMethod; // 0x59
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
    params.inCollisioinMethod = (ESpawnActorCollisionHandlingMethod)inCollisioinMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    params.InParentContainer = (UObject*)InParentContainer;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
UNPC_DBRegManager* UNPC_DBRegManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_DBRegManager");
    return (UNPC_DBRegManager*)res;
}
bool UNPC_DBRegManager::GetSpawnAsset(FString InItemID, UClass*& OutAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.GetSpawnAsset"));
    struct Params_GetSpawnAsset {
        FString InItemID; // 0x0
        UClass* OutAsset; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetSpawnAsset params{};
    params.InItemID = (FString)InItemID;
    params.OutAsset = (UClass*)OutAsset;
    ProcessEvent(func, &params);
    OutAsset = params.OutAsset;
    return (bool)params.ReturnValue;
}
void UNPC_DBRegManager::SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.SaveData"));
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
void UNPC_DBRegManager::RestoreData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.RestoreData"));
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
void UNPC_DBRegManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
uint32_t UNPC_DBRegManager::GetUniqueObjectID(FString InItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.GetUniqueObjectID"));
    struct Params_GetUniqueObjectID {
        FString InItemID; // 0x0
        uint32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetUniqueObjectID params{};
    params.InItemID = (FString)InItemID;
    ProcessEvent(func, &params);
    return (uint32_t)params.ReturnValue;
}
bool UNPC_DBRegManager::GetSpawnPath(FString InItemID, FSoftObjectPath& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.GetSpawnPath"));
    struct Params_GetSpawnPath {
        FString InItemID; // 0x0
        FSoftObjectPath OutPath; // 0x10
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetSpawnPath params{};
    params.InItemID = (FString)InItemID;
    params.OutPath = (FSoftObjectPath)OutPath;
    ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
float UNPC_DBRegManager::GetHealth(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.GetHealth"));
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
bool UNPC_DBRegManager::CreateItemAsScheduledEntity(FString InItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.CreateItemAsScheduledEntity"));
    struct Params_CreateItemAsScheduledEntity {
        FString InItemID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CreateItemAsScheduledEntity params{};
    params.InItemID = (FString)InItemID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ESpawnAllowedResponse UNPC_DBRegManager::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_DBRegManager.AllowSpawn"));
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

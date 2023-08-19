#include "AActor.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "FSoftObjectPath.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "ULevel.hpp"
#include "UNamedCreatureTypeManager.hpp"
#include "UObject.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
#include "UWorld.hpp"
ESpawnAllowedResponse UNamedCreatureTypeManager::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NamedCreatureTypeManager.AllowSpawn"));
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
UNamedCreatureTypeManager* UNamedCreatureTypeManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NamedCreatureTypeManager");
    return (UNamedCreatureTypeManager*)res;
}
AActor* UNamedCreatureTypeManager::SpawnShell(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NamedCreatureTypeManager.SpawnShell"));
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
AActor* UNamedCreatureTypeManager::Spawn(UWorld* InWorld, FTransform& InSpawnTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool bInIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NamedCreatureTypeManager.Spawn"));
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
bool UNamedCreatureTypeManager::GetSpawnPath(FString InItemID, FSoftObjectPath& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NamedCreatureTypeManager.GetSpawnPath"));
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
bool UNamedCreatureTypeManager::GetSpawnAsset(FString InItemID, UClass*& OutAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NamedCreatureTypeManager.GetSpawnAsset"));
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
bool UNamedCreatureTypeManager::GetShellSpawnPath(FString InItemID, FSoftObjectPath& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NamedCreatureTypeManager.GetShellSpawnPath"));
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

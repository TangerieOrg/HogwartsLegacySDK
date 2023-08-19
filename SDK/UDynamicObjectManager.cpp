#include "AActor.hpp"
#include "ARandomEncounterActor.hpp"
#include "FDynamicObjectLoadInfo.hpp"
#include "FTransform.hpp"
#include "UDynamicObjectManager.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "UObject.hpp"
UDynamicObjectManager* UDynamicObjectManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicObjectManager");
    return (UDynamicObjectManager*)res;
}
bool UDynamicObjectManager::SpawnObjectByName(FString ObjectToSpawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.SpawnObjectByName"));
    struct Params_SpawnObjectByName {
        FString ObjectToSpawn; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SpawnObjectByName params{};
    params.ObjectToSpawn = (FString)ObjectToSpawn;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicObjectManager::IsObjectLoaded(FString ObjectToLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.IsObjectLoaded"));
    struct Params_IsObjectLoaded {
        FString ObjectToLoad; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsObjectLoaded params{};
    params.ObjectToLoad = (FString)ObjectToLoad;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform UDynamicObjectManager::FindValidLocation(FTransform InTransform, float Radius, float halfAngle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.FindValidLocation"));
    struct Params_FindValidLocation {
        FTransform InTransform; // 0x0
        float Radius; // 0x30
        float halfAngle; // 0x34
        char pad_38[0x8];
        FTransform ReturnValue; // 0x40
    }; // Size: 0x70
    Params_FindValidLocation params{};
    params.InTransform = (FTransform)InTransform;
    params.Radius = (float)Radius;
    params.halfAngle = (float)halfAngle;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
AActor* UDynamicObjectManager::SpawnDynamicObject(FString ObjectToSpawn, FDynamicObjectLoadInfo InSpawnParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.SpawnDynamicObject"));
    struct Params_SpawnDynamicObject {
        FString ObjectToSpawn; // 0x0
        FDynamicObjectLoadInfo InSpawnParams; // 0x10
        AActor* ReturnValue; // 0x5d0
    }; // Size: 0x5d8
    Params_SpawnDynamicObject params{};
    params.ObjectToSpawn = (FString)ObjectToSpawn;
    params.InSpawnParams = (FDynamicObjectLoadInfo)InSpawnParams;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UDynamicObjectManager::SetDynamicSpawningEnabled(bool bInEnableSpawning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.SetDynamicSpawningEnabled"));
    struct Params_SetDynamicSpawningEnabled {
        bool bInEnableSpawning; // 0x0
    }; // Size: 0x1
    Params_SetDynamicSpawningEnabled params{};
    params.bInEnableSpawning = (bool)bInEnableSpawning;
    ProcessEvent(func, &params);
}
void UDynamicObjectManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UDynamicObjectManager::ObjectLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.ObjectLoaded"));
    struct Params_ObjectLoaded {
    }; // Size: 0x0
    Params_ObjectLoaded params{};
    ProcessEvent(func, &params);
}
bool UDynamicObjectManager::LoadDynamicObject(FString ObjectToLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.LoadDynamicObject"));
    struct Params_LoadDynamicObject {
        FString ObjectToLoad; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_LoadDynamicObject params{};
    params.ObjectToLoad = (FString)ObjectToLoad;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UDynamicObjectManager* UDynamicObjectManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.Get"));
    struct Params_Get {
        UDynamicObjectManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDynamicObjectManager*)params.ReturnValue;
}
void UDynamicObjectManager::DoDelayedSpawn(uint32_t RequestID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObjectManager.DoDelayedSpawn"));
    struct Params_DoDelayedSpawn {
        uint32_t RequestID; // 0x0
    }; // Size: 0x4
    Params_DoDelayedSpawn params{};
    params.RequestID = (uint32_t)RequestID;
    ProcessEvent(func, &params);
}

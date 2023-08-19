#include "AActor.hpp"
#include "AForagable.hpp"
#include "UForageablePool.hpp"
#include "UForegeableSpawnerManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UForegeableSpawnerManager::OnForageableCollected(AForagable* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForegeableSpawnerManager.OnForageableCollected"));
    struct Params_OnForageableCollected {
        AForagable* Actor; // 0x0
    }; // Size: 0x8
    Params_OnForageableCollected params{};
    params.Actor = (AForagable*)Actor;
    ProcessEvent(func, &params);
}
UForegeableSpawnerManager* UForegeableSpawnerManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ForegeableSpawnerManager");
    return (UForegeableSpawnerManager*)res;
}
void UForegeableSpawnerManager::UnregisterInstance(AActor* Instance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForegeableSpawnerManager.UnregisterInstance"));
    struct Params_UnregisterInstance {
        AActor* Instance; // 0x0
    }; // Size: 0x8
    Params_UnregisterInstance params{};
    params.Instance = (AActor*)Instance;
    ProcessEvent(func, &params);
}
void UForegeableSpawnerManager::RegisterInstance(AActor* Instance, bool bShouldSetInitialState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForegeableSpawnerManager.RegisterInstance"));
    struct Params_RegisterInstance {
        AActor* Instance; // 0x0
        bool bShouldSetInitialState; // 0x8
    }; // Size: 0x9
    Params_RegisterInstance params{};
    params.Instance = (AActor*)Instance;
    params.bShouldSetInitialState = (bool)bShouldSetInitialState;
    ProcessEvent(func, &params);
}
void UForegeableSpawnerManager::OnBreakableDestroyed(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForegeableSpawnerManager.OnBreakableDestroyed"));
    struct Params_OnBreakableDestroyed {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnBreakableDestroyed params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
bool UForegeableSpawnerManager::InDungeon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForegeableSpawnerManager.InDungeon"));
    struct Params_InDungeon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InDungeon params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UForegeableSpawnerManager* UForegeableSpawnerManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForegeableSpawnerManager.Get"));
    struct Params_Get {
        UForegeableSpawnerManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UForegeableSpawnerManager*)params.ReturnValue;
}

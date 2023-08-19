#include "UAmbientCreatureSpawnManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAmbientCreatureSpawnManager* UAmbientCreatureSpawnManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientCreatureSpawnManager");
    return (UAmbientCreatureSpawnManager*)res;
}
void UAmbientCreatureSpawnManager::SetSpawningEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientCreatureSpawnManager.SetSpawningEnabled"));
    struct Params_SetSpawningEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetSpawningEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
UAmbientCreatureSpawnManager* UAmbientCreatureSpawnManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientCreatureSpawnManager.Get"));
    struct Params_Get {
        UAmbientCreatureSpawnManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAmbientCreatureSpawnManager*)params.ReturnValue;
}
void UAmbientCreatureSpawnManager::CullAllCreatures(bool bFadeOut) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientCreatureSpawnManager.CullAllCreatures"));
    struct Params_CullAllCreatures {
        bool bFadeOut; // 0x0
    }; // Size: 0x1
    Params_CullAllCreatures params{};
    params.bFadeOut = (bool)bFadeOut;
    ProcessEvent(func, &params);
}

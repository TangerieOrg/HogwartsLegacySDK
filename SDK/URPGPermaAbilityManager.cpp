#include "UFunction.hpp"
#include "UObject.hpp"
#include "URPGPermaAbilityManager.hpp"
URPGPermaAbilityManager* URPGPermaAbilityManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGPermaAbilityManager");
    return (URPGPermaAbilityManager*)res;
}
void URPGPermaAbilityManager::OnGameToBeLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGPermaAbilityManager.OnGameToBeLoaded"));
    struct Params_OnGameToBeLoaded {
    }; // Size: 0x0
    Params_OnGameToBeLoaded params{};
    ProcessEvent(func, &params);
}
void URPGPermaAbilityManager::AddPermaAbilitiesToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGPermaAbilityManager.AddPermaAbilitiesToPlayer"));
    struct Params_AddPermaAbilitiesToPlayer {
    }; // Size: 0x0
    Params_AddPermaAbilitiesToPlayer params{};
    ProcessEvent(func, &params);
}

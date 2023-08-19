#include "UDuelTechniquesManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UDuelTechniquesManager* UDuelTechniquesManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechniquesManager");
    return (UDuelTechniquesManager*)res;
}
void UDuelTechniquesManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UDuelTechniquesManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}

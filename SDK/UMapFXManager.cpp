#include "FMapFXItem.hpp"
#include "UFunction.hpp"
#include "UMapFX.hpp"
#include "UMapFXChain.hpp"
#include "UMapFXManager.hpp"
#include "UObject.hpp"
UMapFXManager* UMapFXManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapFXManager");
    return (UMapFXManager*)res;
}
void UMapFXManager::FXChainComplete(UMapFXChain* MapFXChain) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFXManager.FXChainComplete"));
    struct Params_FXChainComplete {
        UMapFXChain* MapFXChain; // 0x0
    }; // Size: 0x8
    Params_FXChainComplete params{};
    params.MapFXChain = (UMapFXChain*)MapFXChain;
    ProcessEvent(func, &params);
}
void UMapFXManager::FXComplete(UMapFX* MapFX) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFXManager.FXComplete"));
    struct Params_FXComplete {
        UMapFX* MapFX; // 0x0
    }; // Size: 0x8
    Params_FXComplete params{};
    params.MapFX = (UMapFX*)MapFX;
    ProcessEvent(func, &params);
}

#include "AARSharedWorldGameState.hpp"
#include "AGameState.hpp"
#include "UFunction.hpp"
AARSharedWorldGameState* AARSharedWorldGameState::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARSharedWorldGameState");
    return (AARSharedWorldGameState*)res;
}
void AARSharedWorldGameState::K2_OnARWorldMapIsReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady"));
    struct Params_K2_OnARWorldMapIsReady {
    }; // Size: 0x0
    Params_K2_OnARWorldMapIsReady params{};
    ProcessEvent(func, &params);
}

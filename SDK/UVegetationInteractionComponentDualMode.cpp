#include "FVegetationInteractionSettings.hpp"
#include "FVegetationInteractionSpringMassSettings.hpp"
#include "FVegetationInteractionSpringMassTracker.hpp"
#include "FVegetationInteractionVelocityTracker.hpp"
#include "UFunction.hpp"
#include "UVegetationInteractionComponent.hpp"
#include "UVegetationInteractionComponentDualMode.hpp"
UVegetationInteractionComponentDualMode* UVegetationInteractionComponentDualMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VegetationInteractionComponentDualMode");
    return (UVegetationInteractionComponentDualMode*)res;
}
void UVegetationInteractionComponentDualMode::SetVegetationInteractionModeSmooth(float TargetZeroOrOne, float RatePerSecond) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VegetationInteractionComponentDualMode.SetVegetationInteractionModeSmooth"));
    struct Params_SetVegetationInteractionModeSmooth {
        float TargetZeroOrOne; // 0x0
        float RatePerSecond; // 0x4
    }; // Size: 0x8
    Params_SetVegetationInteractionModeSmooth params{};
    params.TargetZeroOrOne = (float)TargetZeroOrOne;
    params.RatePerSecond = (float)RatePerSecond;
    ProcessEvent(func, &params);
}
void UVegetationInteractionComponentDualMode::SetVegetationInteractionModeImmediate(float TargetZeroOrOne) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VegetationInteractionComponentDualMode.SetVegetationInteractionModeImmediate"));
    struct Params_SetVegetationInteractionModeImmediate {
        float TargetZeroOrOne; // 0x0
    }; // Size: 0x4
    Params_SetVegetationInteractionModeImmediate params{};
    params.TargetZeroOrOne = (float)TargetZeroOrOne;
    ProcessEvent(func, &params);
}

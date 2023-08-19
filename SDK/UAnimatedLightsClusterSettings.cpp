#include "UAnimatedLightsClusterSettings.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
UAnimatedLightsClusterSettings* UAnimatedLightsClusterSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimatedLights.AnimatedLightsClusterSettings");
    return (UAnimatedLightsClusterSettings*)res;
}
void UAnimatedLightsClusterSettings::SetRange(float NewTickEveryFrameDistanceMeters, float NewSlowTickDistanceMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimatedLights.AnimatedLightsClusterSettings.SetRange"));
    struct Params_SetRange {
        float NewTickEveryFrameDistanceMeters; // 0x0
        float NewSlowTickDistanceMeters; // 0x4
    }; // Size: 0x8
    Params_SetRange params{};
    params.NewTickEveryFrameDistanceMeters = (float)NewTickEveryFrameDistanceMeters;
    params.NewSlowTickDistanceMeters = (float)NewSlowTickDistanceMeters;
    ProcessEvent(func, &params);
}

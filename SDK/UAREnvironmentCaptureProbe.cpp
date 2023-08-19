#include "FVector.hpp"
#include "UAREnvironmentCaptureProbe.hpp"
#include "UAREnvironmentCaptureProbeTexture.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
UAREnvironmentCaptureProbe* UAREnvironmentCaptureProbe::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.AREnvironmentCaptureProbe");
    return (UAREnvironmentCaptureProbe*)res;
}
FVector UAREnvironmentCaptureProbe::GetExtent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent"));
    struct Params_GetExtent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetExtent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture"));
    struct Params_GetEnvironmentCaptureTexture {
        UAREnvironmentCaptureProbeTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEnvironmentCaptureTexture params{};
    ProcessEvent(func, &params);
    return (UAREnvironmentCaptureProbeTexture*)params.ReturnValue;
}

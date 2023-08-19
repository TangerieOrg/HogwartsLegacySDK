#include "AARSkyLight.hpp"
#include "ASkyLight.hpp"
#include "UAREnvironmentCaptureProbe.hpp"
#include "UFunction.hpp"
AARSkyLight* AARSkyLight::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARSkyLight");
    return (AARSkyLight*)res;
}
void AARSkyLight::SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe"));
    struct Params_SetEnvironmentCaptureProbe {
        UAREnvironmentCaptureProbe* InCaptureProbe; // 0x0
    }; // Size: 0x8
    Params_SetEnvironmentCaptureProbe params{};
    params.InCaptureProbe = (UAREnvironmentCaptureProbe*)InCaptureProbe;
    ProcessEvent(func, &params);
}

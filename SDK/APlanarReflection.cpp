#include "APlanarReflection.hpp"
#include "ASceneCapture.hpp"
#include "UFunction.hpp"
#include "UPlanarReflectionComponent.hpp"
APlanarReflection* APlanarReflection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlanarReflection");
    return (APlanarReflection*)res;
}
void APlanarReflection::OnInterpToggle(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlanarReflection.OnInterpToggle"));
    struct Params_OnInterpToggle {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_OnInterpToggle params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}

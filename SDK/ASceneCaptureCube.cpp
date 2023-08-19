#include "ASceneCapture.hpp"
#include "ASceneCaptureCube.hpp"
#include "UFunction.hpp"
#include "USceneCaptureComponentCube.hpp"
void ASceneCaptureCube::OnInterpToggle(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureCube.OnInterpToggle"));
    struct Params_OnInterpToggle {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_OnInterpToggle params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
ASceneCaptureCube* ASceneCaptureCube::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCaptureCube");
    return (ASceneCaptureCube*)res;
}

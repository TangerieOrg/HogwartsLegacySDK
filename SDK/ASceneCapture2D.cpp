#include "ASceneCapture.hpp"
#include "ASceneCapture2D.hpp"
#include "UFunction.hpp"
#include "USceneCaptureComponent2D.hpp"
ASceneCapture2D* ASceneCapture2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCapture2D");
    return (ASceneCapture2D*)res;
}
void ASceneCapture2D::OnInterpToggle(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCapture2D.OnInterpToggle"));
    struct Params_OnInterpToggle {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_OnInterpToggle params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}

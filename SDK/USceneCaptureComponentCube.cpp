#include "UFunction.hpp"
#include "USceneCaptureComponent.hpp"
#include "USceneCaptureComponentCube.hpp"
#include "UTextureRenderTarget2D.hpp"
#include "UTextureRenderTargetCube.hpp"
USceneCaptureComponentCube* USceneCaptureComponentCube::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCaptureComponentCube");
    return (USceneCaptureComponentCube*)res;
}
void USceneCaptureComponentCube::CaptureScene() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponentCube.CaptureScene"));
    struct Params_CaptureScene {
    }; // Size: 0x0
    Params_CaptureScene params{};
    ProcessEvent(func, &params);
}

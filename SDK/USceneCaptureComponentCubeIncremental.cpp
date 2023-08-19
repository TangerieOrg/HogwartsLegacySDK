#include "ECubeCaptureFace.hpp"
#include "UFunction.hpp"
#include "USceneCaptureComponentCube.hpp"
#include "USceneCaptureComponentCubeIncremental.hpp"
USceneCaptureComponentCubeIncremental* USceneCaptureComponentCubeIncremental::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCaptureComponentCubeIncremental");
    return (USceneCaptureComponentCubeIncremental*)res;
}
void USceneCaptureComponentCubeIncremental::BeginCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponentCubeIncremental.BeginCapture"));
    struct Params_BeginCapture {
    }; // Size: 0x0
    Params_BeginCapture params{};
    ProcessEvent(func, &params);
}

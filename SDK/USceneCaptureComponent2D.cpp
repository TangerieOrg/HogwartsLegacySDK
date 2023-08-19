#include "ECameraProjectionMode\Type.hpp"
#include "ESceneCaptureCompositeMode.hpp"
#include "FMatrix.hpp"
#include "FPostProcessSettings.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneCaptureComponent.hpp"
#include "USceneCaptureComponent2D.hpp"
#include "UTextureRenderTarget2D.hpp"
USceneCaptureComponent2D* USceneCaptureComponent2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCaptureComponent2D");
    return (USceneCaptureComponent2D*)res;
}
void USceneCaptureComponent2D::CaptureScene() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent2D.CaptureScene"));
    struct Params_CaptureScene {
    }; // Size: 0x0
    Params_CaptureScene params{};
    ProcessEvent(func, &params);
}
void USceneCaptureComponent2D::RemoveBlendable() {}
void USceneCaptureComponent2D::AddOrUpdateBlendable() {}

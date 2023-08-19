#include "AActor.hpp"
#include "ASanctuaryPortalCaptureEntrance.hpp"
#include "ASanctuaryPortalCaptureExit.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UTextureCube.hpp"
#include "UTextureRenderTargetCube.hpp"
ASanctuaryPortalCaptureEntrance* ASanctuaryPortalCaptureEntrance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryPortalCaptureEntrance");
    return (ASanctuaryPortalCaptureEntrance*)res;
}
void ASanctuaryPortalCaptureEntrance::RuntimeReCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryPortalCaptureEntrance.RuntimeReCapture"));
    struct Params_RuntimeReCapture {
    }; // Size: 0x0
    Params_RuntimeReCapture params{};
    ProcessEvent(func, &params);
}
void ASanctuaryPortalCaptureEntrance::Capture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryPortalCaptureEntrance.Capture"));
    struct Params_Capture {
    }; // Size: 0x0
    Params_Capture params{};
    ProcessEvent(func, &params);
}
void ASanctuaryPortalCaptureEntrance::ApplyMaterialParameters(UMaterialInstanceDynamic* InMaterialInstanceDynamic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryPortalCaptureEntrance.ApplyMaterialParameters"));
    struct Params_ApplyMaterialParameters {
        UMaterialInstanceDynamic* InMaterialInstanceDynamic; // 0x0
    }; // Size: 0x8
    Params_ApplyMaterialParameters params{};
    params.InMaterialInstanceDynamic = (UMaterialInstanceDynamic*)InMaterialInstanceDynamic;
    ProcessEvent(func, &params);
}

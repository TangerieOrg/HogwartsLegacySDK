#include "UFunction.hpp"
#include "UStereoLayerShape.hpp"
#include "UStereoLayerShapeCylinder.hpp"
UStereoLayerShapeCylinder* UStereoLayerShapeCylinder::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerShapeCylinder");
    return (UStereoLayerShapeCylinder*)res;
}
void UStereoLayerShapeCylinder::SetRadius(float InRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerShapeCylinder.SetRadius"));
    struct Params_SetRadius {
        float InRadius; // 0x0
    }; // Size: 0x4
    Params_SetRadius params{};
    params.InRadius = (float)InRadius;
    ProcessEvent(func, &params);
}
void UStereoLayerShapeCylinder::SetOverlayArc(float InOverlayArc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerShapeCylinder.SetOverlayArc"));
    struct Params_SetOverlayArc {
        float InOverlayArc; // 0x0
    }; // Size: 0x4
    Params_SetOverlayArc params{};
    params.InOverlayArc = (float)InOverlayArc;
    ProcessEvent(func, &params);
}
void UStereoLayerShapeCylinder::SetHeight(int32_t InHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerShapeCylinder.SetHeight"));
    struct Params_SetHeight {
        int32_t InHeight; // 0x0
    }; // Size: 0x4
    Params_SetHeight params{};
    params.InHeight = (int32_t)InHeight;
    ProcessEvent(func, &params);
}

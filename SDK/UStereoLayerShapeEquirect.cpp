#include "FBox2D.hpp"
#include "FEquirectProps.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UStereoLayerShape.hpp"
#include "UStereoLayerShapeEquirect.hpp"
UStereoLayerShapeEquirect* UStereoLayerShapeEquirect::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StereoLayerShapeEquirect");
    return (UStereoLayerShapeEquirect*)res;
}
void UStereoLayerShapeEquirect::SetEquirectProps(FEquirectProps InScaleBiases) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.StereoLayerShapeEquirect.SetEquirectProps"));
    struct Params_SetEquirectProps {
        FEquirectProps InScaleBiases; // 0x0
    }; // Size: 0x48
    Params_SetEquirectProps params{};
    params.InScaleBiases = (FEquirectProps)InScaleBiases;
    ProcessEvent(func, &params);
}

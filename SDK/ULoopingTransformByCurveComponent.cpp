#include "FRotator.hpp"
#include "UCurveFloat.hpp"
#include "ULoopingTransformByCurveComponent.hpp"
#include "USceneComponent.hpp"
ULoopingTransformByCurveComponent* ULoopingTransformByCurveComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LoopingTransformByCurveComponent");
    return (ULoopingTransformByCurveComponent*)res;
}

#include "UHoudiniSplineComponent.hpp"
#include "USceneComponent.hpp"
UHoudiniSplineComponent* UHoudiniSplineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent");
    return (UHoudiniSplineComponent*)res;
}

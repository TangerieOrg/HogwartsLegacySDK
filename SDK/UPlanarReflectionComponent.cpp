#include "UBoxComponent.hpp"
#include "UPlanarReflectionComponent.hpp"
#include "USceneCaptureComponent.hpp"
UPlanarReflectionComponent* UPlanarReflectionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlanarReflectionComponent");
    return (UPlanarReflectionComponent*)res;
}

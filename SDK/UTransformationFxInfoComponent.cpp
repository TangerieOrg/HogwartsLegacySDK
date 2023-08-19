#include "UBoxComponent.hpp"
#include "USceneComponent.hpp"
#include "UTransformationFxInfoComponent.hpp"
UTransformationFxInfoComponent* UTransformationFxInfoComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationFxInfoComponent");
    return (UTransformationFxInfoComponent*)res;
}

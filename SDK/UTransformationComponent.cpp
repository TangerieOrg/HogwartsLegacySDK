#include "UStateEffectComponent.hpp"
#include "UTransformationComponent.hpp"
UTransformationComponent* UTransformationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationComponent");
    return (UTransformationComponent*)res;
}

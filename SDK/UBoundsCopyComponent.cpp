#include "FTransform.hpp"
#include "UActorComponent.hpp"
#include "UBoundsCopyComponent.hpp"
UBoundsCopyComponent* UBoundsCopyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BoundsCopyComponent");
    return (UBoundsCopyComponent*)res;
}

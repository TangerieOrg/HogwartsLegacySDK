#include "FOrientToSlerp.hpp"
#include "FVector.hpp"
#include "UPointAtCameraComponent.hpp"
#include "UPointAtComponent.hpp"
UPointAtCameraComponent* UPointAtCameraComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PointAtCameraComponent");
    return (UPointAtCameraComponent*)res;
}

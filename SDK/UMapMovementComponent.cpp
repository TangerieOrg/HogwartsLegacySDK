#include "UFloatingPawnMovement.hpp"
#include "UMapCameraParameters.hpp"
#include "UMapMovementComponent.hpp"
UMapMovementComponent* UMapMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapMovementComponent");
    return (UMapMovementComponent*)res;
}

#include "FVector2D.hpp"
#include "UFloatingPawnMovement.hpp"
#include "UPhoenixHoverDroneMovementComponent.hpp"
UPhoenixHoverDroneMovementComponent* UPhoenixHoverDroneMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HoverDrone.PhoenixHoverDroneMovementComponent");
    return (UPhoenixHoverDroneMovementComponent*)res;
}

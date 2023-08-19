#include "UFloatingPawnMovement.hpp"
#include "UPawnMovementComponent.hpp"
UFloatingPawnMovement* UFloatingPawnMovement::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.FloatingPawnMovement");
    return (UFloatingPawnMovement*)res;
}

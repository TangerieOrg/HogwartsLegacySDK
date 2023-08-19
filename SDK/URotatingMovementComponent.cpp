#include "FRotator.hpp"
#include "FVector.hpp"
#include "UMovementComponent.hpp"
#include "URotatingMovementComponent.hpp"
URotatingMovementComponent* URotatingMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RotatingMovementComponent");
    return (URotatingMovementComponent*)res;
}

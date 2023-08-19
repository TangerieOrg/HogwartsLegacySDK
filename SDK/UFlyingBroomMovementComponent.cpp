#include "UFlyingBroomMovementComponent.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFlyingBroomPhysicsScratch.hpp"
#include "UFlyingBroomStats.hpp"
#include "UPawnMovementComponent.hpp"
UFlyingBroomMovementComponent* UFlyingBroomMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomMovementComponent");
    return (UFlyingBroomMovementComponent*)res;
}

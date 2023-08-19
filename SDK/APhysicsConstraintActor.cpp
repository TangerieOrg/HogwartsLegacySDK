#include "AActor.hpp"
#include "APhysicsConstraintActor.hpp"
#include "ARigidBodyBase.hpp"
#include "UPhysicsConstraintComponent.hpp"
APhysicsConstraintActor* APhysicsConstraintActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsConstraintActor");
    return (APhysicsConstraintActor*)res;
}

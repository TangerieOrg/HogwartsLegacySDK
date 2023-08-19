#include "APhysicsThruster.hpp"
#include "ARigidBodyBase.hpp"
#include "UPhysicsThrusterComponent.hpp"
APhysicsThruster* APhysicsThruster::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsThruster");
    return (APhysicsThruster*)res;
}

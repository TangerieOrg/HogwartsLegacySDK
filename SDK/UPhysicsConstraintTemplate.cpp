#include "FConstraintInstance.hpp"
#include "FConstraintProfileProperties.hpp"
#include "FPhysicsConstraintProfileHandle.hpp"
#include "UObject.hpp"
#include "UPhysicsConstraintTemplate.hpp"
UPhysicsConstraintTemplate* UPhysicsConstraintTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsConstraintTemplate");
    return (UPhysicsConstraintTemplate*)res;
}

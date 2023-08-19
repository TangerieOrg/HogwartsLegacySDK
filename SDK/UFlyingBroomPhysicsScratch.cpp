#include "UFlyingBroomMovementComponent.hpp"
#include "UFlyingBroomPhysicsScratch.hpp"
#include "UObject.hpp"
UFlyingBroomPhysicsScratch* UFlyingBroomPhysicsScratch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomPhysicsScratch");
    return (UFlyingBroomPhysicsScratch*)res;
}

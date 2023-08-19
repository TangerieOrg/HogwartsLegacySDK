#include "UFlyingBroomPhysicsScratch.hpp"
#include "UFlyingBroomPhysicsScratch_FreeRoam.hpp"
#include "UFlyingBroomPhysics_FreeRoam.hpp"
#include "UFlyingBroomStats.hpp"
UFlyingBroomPhysicsScratch_FreeRoam* UFlyingBroomPhysicsScratch_FreeRoam::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomPhysicsScratch_FreeRoam");
    return (UFlyingBroomPhysicsScratch_FreeRoam*)res;
}

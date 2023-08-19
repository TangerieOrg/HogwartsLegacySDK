#include "ECustomInterpType\Type.hpp"
#include "FFlyingBroomImpulseData.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFlyingBroomPhysics_FreeRoam.hpp"
UFlyingBroomPhysics_FreeRoam* UFlyingBroomPhysics_FreeRoam::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomPhysics_FreeRoam");
    return (UFlyingBroomPhysics_FreeRoam*)res;
}

#include "UFlyingBroomPhysicsScratch.hpp"
#include "UFlyingBroomPhysicsScratch_Spline.hpp"
#include "UFlyingBroomPhysics_Spline.hpp"
UFlyingBroomPhysicsScratch_Spline* UFlyingBroomPhysicsScratch_Spline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomPhysicsScratch_Spline");
    return (UFlyingBroomPhysicsScratch_Spline*)res;
}

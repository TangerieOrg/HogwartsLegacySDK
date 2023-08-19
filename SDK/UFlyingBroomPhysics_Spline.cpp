#include "ECustomInterpType\Type.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFlyingBroomPhysics_Spline.hpp"
UFlyingBroomPhysics_Spline* UFlyingBroomPhysics_Spline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomPhysics_Spline");
    return (UFlyingBroomPhysics_Spline*)res;
}

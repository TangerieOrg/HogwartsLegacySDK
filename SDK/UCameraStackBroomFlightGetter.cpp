#include "UCameraStackBroomFlightGetter.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackBroomFlightGetter* UCameraStackBroomFlightGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBroomFlightGetter");
    return (UCameraStackBroomFlightGetter*)res;
}

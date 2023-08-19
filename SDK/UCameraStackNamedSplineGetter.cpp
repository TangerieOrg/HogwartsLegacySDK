#include "UCameraStackNamedSplineGetter.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackNamedSplineGetter* UCameraStackNamedSplineGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackNamedSplineGetter");
    return (UCameraStackNamedSplineGetter*)res;
}

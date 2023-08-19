#include "ECameraStackSplineType.hpp"
#include "FVector.hpp"
#include "UCameraStackNearbyCameraSplineGetter.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackNearbyCameraSplineGetter* UCameraStackNearbyCameraSplineGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackNearbyCameraSplineGetter");
    return (UCameraStackNearbyCameraSplineGetter*)res;
}

#include "FCameraOptionName.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorLookAheadAlongSpline.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackBehaviorLookAheadAlongSpline* UCameraStackBehaviorLookAheadAlongSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLookAheadAlongSpline");
    return (UCameraStackBehaviorLookAheadAlongSpline*)res;
}

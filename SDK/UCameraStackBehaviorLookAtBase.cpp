#include "FBox2D.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorLookAtBase* UCameraStackBehaviorLookAtBase::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLookAtBase");
    return (UCameraStackBehaviorLookAtBase*)res;
}

#include "FRuntimeFloatCurve.hpp"
#include "UCameraStackBehaviorCrossBlendBySpeed.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UCameraStackBehaviorCrossBlendBySpeed* UCameraStackBehaviorCrossBlendBySpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCrossBlendBySpeed");
    return (UCameraStackBehaviorCrossBlendBySpeed*)res;
}

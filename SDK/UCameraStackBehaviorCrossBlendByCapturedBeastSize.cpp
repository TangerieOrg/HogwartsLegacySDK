#include "UCameraStackBehaviorCrossBlendByCapturedBeastSize.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UCameraStackBehaviorCrossBlendByCapturedBeastSize* UCameraStackBehaviorCrossBlendByCapturedBeastSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorCrossBlendByCapturedBeastSize");
    return (UCameraStackBehaviorCrossBlendByCapturedBeastSize*)res;
}

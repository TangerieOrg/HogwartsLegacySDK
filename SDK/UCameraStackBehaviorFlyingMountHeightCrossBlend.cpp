#include "FFloatRange.hpp"
#include "UCameraStackBehaviorFlyingMountHeightCrossBlend.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UCameraStackBehaviorFlyingMountHeightCrossBlend* UCameraStackBehaviorFlyingMountHeightCrossBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorFlyingMountHeightCrossBlend");
    return (UCameraStackBehaviorFlyingMountHeightCrossBlend*)res;
}

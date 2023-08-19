#include "FCameraStackMultiCrossBlendGroupTemplate.hpp"
#include "UCameraStackBehaviorMultiCrossBlend.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UCameraStackBehaviorMultiCrossBlendStandalone* UCameraStackBehaviorMultiCrossBlendStandalone::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMultiCrossBlendStandalone");
    return (UCameraStackBehaviorMultiCrossBlendStandalone*)res;
}

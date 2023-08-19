#include "UCameraStackBehaviorInfluenceCrossBlend.hpp"
#include "UCameraStackBehaviorMultiCrossBlend.hpp"
UCameraStackBehaviorInfluenceCrossBlend* UCameraStackBehaviorInfluenceCrossBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorInfluenceCrossBlend");
    return (UCameraStackBehaviorInfluenceCrossBlend*)res;
}

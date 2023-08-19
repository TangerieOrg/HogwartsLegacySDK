#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
#include "UCameraStackBehaviorWingardiumCrossBlend.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorWingardiumCrossBlend* UCameraStackBehaviorWingardiumCrossBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorWingardiumCrossBlend");
    return (UCameraStackBehaviorWingardiumCrossBlend*)res;
}

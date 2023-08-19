#include "FBox2D.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMoveToKeepInFrame.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorMoveToKeepInFrame* UCameraStackBehaviorMoveToKeepInFrame::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMoveToKeepInFrame");
    return (UCameraStackBehaviorMoveToKeepInFrame*)res;
}

#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorIncludeSecondaryTarget.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorIncludeSecondaryTarget* UCameraStackBehaviorIncludeSecondaryTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorIncludeSecondaryTarget");
    return (UCameraStackBehaviorIncludeSecondaryTarget*)res;
}

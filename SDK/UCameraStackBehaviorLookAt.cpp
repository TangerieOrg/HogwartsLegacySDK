#include "UCameraStackBehaviorLookAt.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackBehaviorLookAt* UCameraStackBehaviorLookAt::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLookAt");
    return (UCameraStackBehaviorLookAt*)res;
}

#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetTargetOffset.hpp"
UCameraStackBehaviorSetTargetOffset* UCameraStackBehaviorSetTargetOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetTargetOffset");
    return (UCameraStackBehaviorSetTargetOffset*)res;
}

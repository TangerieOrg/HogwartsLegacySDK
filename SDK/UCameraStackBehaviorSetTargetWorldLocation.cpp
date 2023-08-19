#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetTargetWorldLocation.hpp"
UCameraStackBehaviorSetTargetWorldLocation* UCameraStackBehaviorSetTargetWorldLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetTargetWorldLocation");
    return (UCameraStackBehaviorSetTargetWorldLocation*)res;
}

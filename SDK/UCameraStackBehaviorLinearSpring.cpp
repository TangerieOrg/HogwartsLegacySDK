#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorLinearSpring.hpp"
UCameraStackBehaviorLinearSpring* UCameraStackBehaviorLinearSpring::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLinearSpring");
    return (UCameraStackBehaviorLinearSpring*)res;
}

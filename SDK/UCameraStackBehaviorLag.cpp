#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorLag.hpp"
UCameraStackBehaviorLag* UCameraStackBehaviorLag::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLag");
    return (UCameraStackBehaviorLag*)res;
}

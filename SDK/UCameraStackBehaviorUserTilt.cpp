#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorUserTilt.hpp"
UCameraStackBehaviorUserTilt* UCameraStackBehaviorUserTilt::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorUserTilt");
    return (UCameraStackBehaviorUserTilt*)res;
}

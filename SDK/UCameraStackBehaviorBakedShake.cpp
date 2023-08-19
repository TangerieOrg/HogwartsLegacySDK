#include "UCameraStackBehaviorBakedShake.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCurveVector.hpp"
UCameraStackBehaviorBakedShake* UCameraStackBehaviorBakedShake::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorBakedShake");
    return (UCameraStackBehaviorBakedShake*)res;
}

#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorSetAperture.hpp"
UCameraStackBehaviorSetAperture* UCameraStackBehaviorSetAperture::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorSetAperture");
    return (UCameraStackBehaviorSetAperture*)res;
}

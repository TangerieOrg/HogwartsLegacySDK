#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorLookAhead.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
UCameraStackBehaviorLookAhead* UCameraStackBehaviorLookAhead::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorLookAhead");
    return (UCameraStackBehaviorLookAhead*)res;
}

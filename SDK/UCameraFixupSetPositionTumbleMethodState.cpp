#include "UCameraFixupSetPositionMethodState.hpp"
#include "UCameraFixupSetPositionTumbleMethodState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetPositionTumbleMethodState* UCameraFixupSetPositionTumbleMethodState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionTumbleMethodState");
    return (UCameraFixupSetPositionTumbleMethodState*)res;
}

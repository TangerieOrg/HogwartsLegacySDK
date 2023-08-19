#include "UCameraFixupSetPositionMethodState.hpp"
#include "UCameraFixupSetPositionXYZMethodState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetPositionXYZMethodState* UCameraFixupSetPositionXYZMethodState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionXYZMethodState");
    return (UCameraFixupSetPositionXYZMethodState*)res;
}

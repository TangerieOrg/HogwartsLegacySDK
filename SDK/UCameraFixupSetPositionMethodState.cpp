#include "UCameraFixupSetPositionMethodState.hpp"
#include "UObject.hpp"
UCameraFixupSetPositionMethodState* UCameraFixupSetPositionMethodState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionMethodState");
    return (UCameraFixupSetPositionMethodState*)res;
}

#include "UCameraFixupOperationState.hpp"
#include "UCameraFixupSetPositionMethodState.hpp"
#include "UCameraFixupSetPositionOperationState.hpp"
UCameraFixupSetPositionOperationState* UCameraFixupSetPositionOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPositionOperationState");
    return (UCameraFixupSetPositionOperationState*)res;
}

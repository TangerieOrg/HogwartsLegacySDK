#include "UCameraFixupOperationState.hpp"
#include "UCameraFixupSetAnglesOperationState.hpp"
UCameraFixupSetAnglesOperationState* UCameraFixupSetAnglesOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetAnglesOperationState");
    return (UCameraFixupSetAnglesOperationState*)res;
}

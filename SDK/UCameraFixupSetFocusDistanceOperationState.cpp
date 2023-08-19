#include "UCameraFixupOperationState.hpp"
#include "UCameraFixupSetFocusDistanceOperationState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetFocusDistanceOperationState* UCameraFixupSetFocusDistanceOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetFocusDistanceOperationState");
    return (UCameraFixupSetFocusDistanceOperationState*)res;
}

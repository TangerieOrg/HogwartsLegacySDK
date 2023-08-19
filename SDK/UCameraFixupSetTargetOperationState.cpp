#include "UCameraFixupOperationState.hpp"
#include "UCameraFixupSetTargetOperationState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupSetTargetOperationState* UCameraFixupSetTargetOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetTargetOperationState");
    return (UCameraFixupSetTargetOperationState*)res;
}

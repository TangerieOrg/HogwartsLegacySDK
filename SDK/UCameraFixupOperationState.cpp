#include "UCameraFixupOperationState.hpp"
#include "UObject.hpp"
UCameraFixupOperationState* UCameraFixupOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupOperationState");
    return (UCameraFixupOperationState*)res;
}

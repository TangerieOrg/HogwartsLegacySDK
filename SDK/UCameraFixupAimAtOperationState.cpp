#include "UCameraFixupAimAtOperationState.hpp"
#include "UCameraFixupOperationState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAimAtOperationState* UCameraFixupAimAtOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupAimAtOperationState");
    return (UCameraFixupAimAtOperationState*)res;
}

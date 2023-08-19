#include "UCameraFixupAimWithPivotOperationState.hpp"
#include "UCameraFixupOperationState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAimWithPivotOperationState* UCameraFixupAimWithPivotOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupAimWithPivotOperationState");
    return (UCameraFixupAimWithPivotOperationState*)res;
}

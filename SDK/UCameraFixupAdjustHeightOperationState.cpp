#include "UCameraFixupAdjustHeightOperationState.hpp"
#include "UCameraFixupOperationState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAdjustHeightOperationState* UCameraFixupAdjustHeightOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupAdjustHeightOperationState");
    return (UCameraFixupAdjustHeightOperationState*)res;
}

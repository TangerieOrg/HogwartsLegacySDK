#include "UCameraFixupOperationState.hpp"
#include "UCameraFixupSetPropertiesOperationState.hpp"
UCameraFixupSetPropertiesOperationState* UCameraFixupSetPropertiesOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupSetPropertiesOperationState");
    return (UCameraFixupSetPropertiesOperationState*)res;
}

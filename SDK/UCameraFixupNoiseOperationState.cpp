#include "UCameraFixupNoiseOperationState.hpp"
#include "UCameraFixupNoiseOperations.hpp"
#include "UCameraFixupOperationState.hpp"
UCameraFixupNoiseOperationState* UCameraFixupNoiseOperationState::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.CameraFixupNoiseOperationState");
    return (UCameraFixupNoiseOperationState*)res;
}

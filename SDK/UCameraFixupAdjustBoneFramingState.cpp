#include "UCameraFixupAdjustBoneFramingState.hpp"
#include "UCameraFixupOperationState.hpp"
#include "UTransformProvider.hpp"
UCameraFixupAdjustBoneFramingState* UCameraFixupAdjustBoneFramingState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraFixupAdjustBoneFramingState");
    return (UCameraFixupAdjustBoneFramingState*)res;
}

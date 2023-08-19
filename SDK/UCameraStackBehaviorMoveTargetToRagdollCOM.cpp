#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMoveTargetToRagdollCOM.hpp"
UCameraStackBehaviorMoveTargetToRagdollCOM* UCameraStackBehaviorMoveTargetToRagdollCOM::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorMoveTargetToRagdollCOM");
    return (UCameraStackBehaviorMoveTargetToRagdollCOM*)res;
}

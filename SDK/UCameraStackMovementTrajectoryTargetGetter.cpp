#include "FVector2D.hpp"
#include "UCameraStackMovementTrajectoryTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackMovementTrajectoryTargetGetter* UCameraStackMovementTrajectoryTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackMovementTrajectoryTargetGetter");
    return (UCameraStackMovementTrajectoryTargetGetter*)res;
}

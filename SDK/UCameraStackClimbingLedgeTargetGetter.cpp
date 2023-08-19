#include "FVector.hpp"
#include "UCameraStackClimbingLedgeTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackClimbingLedgeTargetGetter* UCameraStackClimbingLedgeTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackClimbingLedgeTargetGetter");
    return (UCameraStackClimbingLedgeTargetGetter*)res;
}

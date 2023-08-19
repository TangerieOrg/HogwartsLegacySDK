#include "UFXAdjustments.hpp"
#include "UFXAdjustments_TargetRootActor.hpp"
UFXAdjustments_TargetRootActor* UFXAdjustments_TargetRootActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_TargetRootActor");
    return (UFXAdjustments_TargetRootActor*)res;
}

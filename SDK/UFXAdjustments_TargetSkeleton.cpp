#include "UFXAdjustments.hpp"
#include "UFXAdjustments_TargetSkeleton.hpp"
UFXAdjustments_TargetSkeleton* UFXAdjustments_TargetSkeleton::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_TargetSkeleton");
    return (UFXAdjustments_TargetSkeleton*)res;
}

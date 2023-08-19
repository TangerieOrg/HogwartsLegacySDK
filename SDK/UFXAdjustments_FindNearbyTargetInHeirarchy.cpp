#include "UClass.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_FindNearbyTargetInHeirarchy.hpp"
UFXAdjustments_FindNearbyTargetInHeirarchy* UFXAdjustments_FindNearbyTargetInHeirarchy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_FindNearbyTargetInHeirarchy");
    return (UFXAdjustments_FindNearbyTargetInHeirarchy*)res;
}

#include "UClass.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_FindNearbyTarget.hpp"
UFXAdjustments_FindNearbyTarget* UFXAdjustments_FindNearbyTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_FindNearbyTarget");
    return (UFXAdjustments_FindNearbyTarget*)res;
}

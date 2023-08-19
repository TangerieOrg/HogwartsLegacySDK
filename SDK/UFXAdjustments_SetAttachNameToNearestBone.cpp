#include "UFXAdjustments.hpp"
#include "UFXAdjustments_SetAttachNameToNearestBone.hpp"
UFXAdjustments_SetAttachNameToNearestBone* UFXAdjustments_SetAttachNameToNearestBone::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_SetAttachNameToNearestBone");
    return (UFXAdjustments_SetAttachNameToNearestBone*)res;
}

#include "FRotator.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_ApplyRotation.hpp"
UFXAdjustments_ApplyRotation* UFXAdjustments_ApplyRotation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_ApplyRotation");
    return (UFXAdjustments_ApplyRotation*)res;
}

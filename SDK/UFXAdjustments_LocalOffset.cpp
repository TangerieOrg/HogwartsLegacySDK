#include "FVector.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_LocalOffset.hpp"
UFXAdjustments_LocalOffset* UFXAdjustments_LocalOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_LocalOffset");
    return (UFXAdjustments_LocalOffset*)res;
}

#include "FVector.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_Scale.hpp"
UFXAdjustments_Scale* UFXAdjustments_Scale::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_Scale");
    return (UFXAdjustments_Scale*)res;
}

#include "UFXAdjustments.hpp"
#include "UObject.hpp"
UFXAdjustments* UFXAdjustments::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.FXAdjustments");
    return (UFXAdjustments*)res;
}

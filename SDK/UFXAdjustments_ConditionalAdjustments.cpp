#include "UFXAdjustments.hpp"
#include "UFXAdjustments_ConditionalAdjustments.hpp"
#include "UFXFilter.hpp"
UFXAdjustments_ConditionalAdjustments* UFXAdjustments_ConditionalAdjustments::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_ConditionalAdjustments");
    return (UFXAdjustments_ConditionalAdjustments*)res;
}

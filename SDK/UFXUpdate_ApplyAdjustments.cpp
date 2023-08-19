#include "UFXAdjustments.hpp"
#include "UFXUpdate_ApplyAdjustments.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_ApplyAdjustments* UFXUpdate_ApplyAdjustments::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_ApplyAdjustments");
    return (UFXUpdate_ApplyAdjustments*)res;
}

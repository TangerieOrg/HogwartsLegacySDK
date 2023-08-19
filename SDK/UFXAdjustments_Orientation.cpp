#include "EMultiFXOrientation.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_Orientation.hpp"
UFXAdjustments_Orientation* UFXAdjustments_Orientation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_Orientation");
    return (UFXAdjustments_Orientation*)res;
}

#include "EMultiFXLocation.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_Location.hpp"
UFXAdjustments_Location* UFXAdjustments_Location::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_Location");
    return (UFXAdjustments_Location*)res;
}

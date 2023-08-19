#include "EMultiFXBeamSource.hpp"
#include "EMultiFXLocation.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_Beam.hpp"
UFXAdjustments_Beam* UFXAdjustments_Beam::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_Beam");
    return (UFXAdjustments_Beam*)res;
}

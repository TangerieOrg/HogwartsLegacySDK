#include "EHighContrastDistanceType.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolWithinHighContrastDistance.hpp"
UFXAutoTriggerBoolWithinHighContrastDistance* UFXAutoTriggerBoolWithinHighContrastDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolWithinHighContrastDistance");
    return (UFXAutoTriggerBoolWithinHighContrastDistance*)res;
}

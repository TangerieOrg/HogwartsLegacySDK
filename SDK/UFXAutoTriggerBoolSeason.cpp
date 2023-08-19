#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolSeason.hpp"
UFXAutoTriggerBoolSeason* UFXAutoTriggerBoolSeason::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSeason");
    return (UFXAutoTriggerBoolSeason*)res;
}

#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolAlive.hpp"
UFXAutoTriggerBoolAlive* UFXAutoTriggerBoolAlive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolAlive");
    return (UFXAutoTriggerBoolAlive*)res;
}

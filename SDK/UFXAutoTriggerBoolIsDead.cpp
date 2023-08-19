#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolIsDead.hpp"
UFXAutoTriggerBoolIsDead* UFXAutoTriggerBoolIsDead::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolIsDead");
    return (UFXAutoTriggerBoolIsDead*)res;
}

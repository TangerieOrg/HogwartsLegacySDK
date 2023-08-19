#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolLockable.hpp"
UFXAutoTriggerBoolLockable* UFXAutoTriggerBoolLockable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolLockable");
    return (UFXAutoTriggerBoolLockable*)res;
}

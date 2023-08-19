#include "UFXAutoTriggerBoolCanOpenLockable.hpp"
#include "UFXAutoTriggerBoolLockable.hpp"
UFXAutoTriggerBoolCanOpenLockable* UFXAutoTriggerBoolCanOpenLockable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolCanOpenLockable");
    return (UFXAutoTriggerBoolCanOpenLockable*)res;
}

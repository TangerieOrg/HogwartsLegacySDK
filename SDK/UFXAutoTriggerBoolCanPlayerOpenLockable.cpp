#include "UFXAutoTriggerBoolCanPlayerOpenLockable.hpp"
#include "UFXAutoTriggerBoolLockable.hpp"
UFXAutoTriggerBoolCanPlayerOpenLockable* UFXAutoTriggerBoolCanPlayerOpenLockable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolCanPlayerOpenLockable");
    return (UFXAutoTriggerBoolCanPlayerOpenLockable*)res;
}

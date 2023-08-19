#include "UFXAutoTriggerBoolLockable.hpp"
#include "UFXAutoTriggerBoolLockableIsLocked.hpp"
UFXAutoTriggerBoolLockableIsLocked* UFXAutoTriggerBoolLockableIsLocked::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolLockableIsLocked");
    return (UFXAutoTriggerBoolLockableIsLocked*)res;
}

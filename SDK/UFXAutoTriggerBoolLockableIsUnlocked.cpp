#include "UFXAutoTriggerBoolLockable.hpp"
#include "UFXAutoTriggerBoolLockableIsUnlocked.hpp"
UFXAutoTriggerBoolLockableIsUnlocked* UFXAutoTriggerBoolLockableIsUnlocked::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolLockableIsUnlocked");
    return (UFXAutoTriggerBoolLockableIsUnlocked*)res;
}

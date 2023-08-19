#pragma once
#include <cstdint>
#include "UFXAutoTriggerBoolLockable.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolLockableIsUnlocked : public UFXAutoTriggerBoolLockable {
public:
    static UFXAutoTriggerBoolLockableIsUnlocked* StaticClass();
}; // Size: 0x28
#pragma pack(pop)

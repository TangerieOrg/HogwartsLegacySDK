#pragma once
#include <cstdint>
#include "UFXAutoTriggerBoolLockable.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolLockableIsLocked : public UFXAutoTriggerBoolLockable {
public:
    static UFXAutoTriggerBoolLockableIsLocked* StaticClass();
}; // Size: 0x28
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UFXAutoTriggerBoolLockable.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolCanOpenLockable : public UFXAutoTriggerBoolLockable {
public:
    static UFXAutoTriggerBoolCanOpenLockable* StaticClass();
}; // Size: 0x28
#pragma pack(pop)

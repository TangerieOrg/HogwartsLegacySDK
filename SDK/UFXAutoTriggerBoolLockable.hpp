#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolLockable : public UFXAutoTriggerBool {
public:
    static UFXAutoTriggerBoolLockable* StaticClass();
}; // Size: 0x28
#pragma pack(pop)

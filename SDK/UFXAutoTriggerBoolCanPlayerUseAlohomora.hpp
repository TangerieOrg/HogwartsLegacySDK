#pragma once
#include <cstdint>
#include "UFXAutoTriggerBoolLockable.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolCanPlayerUseAlohomora : public UFXAutoTriggerBoolLockable {
public:
    bool bCheckIfLockedFirst; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerBoolCanPlayerUseAlohomora* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

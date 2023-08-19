#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UAnimNotify_ManageBones : public UAnimNotifyState {
public:
    bool RightArm; // 0x30
    bool LeftArm; // 0x31
    bool BothArms; // 0x32
    char pad_33[0x25];
    static UAnimNotify_ManageBones* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

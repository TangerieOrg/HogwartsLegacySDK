#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
class UPoseSampler_BlinkEyes;
#pragma pack(push, 1)
class UAnimNotify_BlinkEyes : public UAnimNotify {
public:
    char pad_38[0x8];
    bool bDoubleBlink; // 0x40
    char pad_41[0x3];
    float BlinkSpeed; // 0x44
    char pad_48[0x10];
    UPoseSampler_BlinkEyes* PoseSampler; // 0x58
    char pad_60[0x10];
    static UAnimNotify_BlinkEyes* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

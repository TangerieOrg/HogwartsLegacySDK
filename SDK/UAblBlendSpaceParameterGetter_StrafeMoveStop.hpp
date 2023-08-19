#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter_MoveStrafe.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_StrafeMoveStop : public UAblBlendSpaceParameterGetter_MoveStrafe {
public:
    bool bUseWorldSpeedTracker; // 0x38
    bool bOverrideWalkSpeed; // 0x39
    char pad_3a[0x2];
    float WalkSpeedOverride; // 0x3c
    bool bOverrideJogSpeed; // 0x40
    char pad_41[0x3];
    float JogSpeedOverride; // 0x44
    static UAblBlendSpaceParameterGetter_StrafeMoveStop* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_JumpLand2Move : public UAblBlendSpaceParameterGetter {
public:
    float ClampDesiredAngle; // 0x28
    char pad_2c[0x4];
    static UAblBlendSpaceParameterGetter_JumpLand2Move* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

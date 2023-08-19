#pragma once
#include <cstdint>
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_AttackAnticipation : public UAblBlendSpaceParameterGetter {
public:
    float DeadZoneAngle; // 0x28
    float ClampDesiredAngle; // 0x2c
    float ToExtremesSpeed; // 0x30
    float ToZeroSpeed; // 0x34
    static UAblBlendSpaceParameterGetter_AttackAnticipation* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

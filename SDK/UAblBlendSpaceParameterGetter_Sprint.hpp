#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_Sprint : public UAblBlendSpaceParameterGetter {
public:
    float MaxAngle; // 0x28
    float AngleRatioNearZeroTolerance; // 0x2c
    float XInterpInSpeed; // 0x30
    ECustomInterpType::Type XInterpInType; // 0x34
    char pad_35[0x3];
    float XInterpOutSpeed; // 0x38
    ECustomInterpType::Type XInterpOutType; // 0x3c
    char pad_3d[0x3];
    float MinSlope; // 0x40
    float MaxSlope; // 0x44
    bool bBlendInputOnTransitionOut; // 0x48
    bool bUseVelocity; // 0x49
    char pad_4a[0x6];
    static UAblBlendSpaceParameterGetter_Sprint* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

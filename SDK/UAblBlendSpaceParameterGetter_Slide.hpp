#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_Slide : public UAblBlendSpaceParameterGetter {
public:
    float NonStickMax; // 0x28
    float DeadZone; // 0x2c
    ECustomInterpType::Type XInterpType; // 0x30
    char pad_31[0x3];
    float XInterpSpeed; // 0x34
    ECustomInterpType::Type XFastInterpType; // 0x38
    char pad_39[0x3];
    float XFastInterpSpeed; // 0x3c
    ECustomInterpType::Type YInterpType; // 0x40
    char pad_41[0x3];
    float YInterpSpeed; // 0x44
    bool bSlipAndFall; // 0x48
    bool bReverseDirection; // 0x49
    bool bGetBlendParamsFromLast; // 0x4a
    char pad_4b[0x5];
    static UAblBlendSpaceParameterGetter_Slide* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

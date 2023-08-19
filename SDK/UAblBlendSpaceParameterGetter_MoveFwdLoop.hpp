#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_MoveFwdLoop : public UAblBlendSpaceParameterGetter {
public:
    float InterpSpeed; // 0x28
    float WadingInterpSpeed; // 0x2c
    ECustomInterpType::Type InterpType; // 0x30
    bool bBlendInputOnTransitionOut; // 0x31
    bool bUseVelocity; // 0x32
    char pad_33[0x5];
    static UAblBlendSpaceParameterGetter_MoveFwdLoop* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

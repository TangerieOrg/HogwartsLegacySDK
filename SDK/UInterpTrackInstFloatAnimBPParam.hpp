#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
class UAnimInstance;
#pragma pack(push, 1)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst {
public:
    UAnimInstance* AnimScriptInstance; // 0x28
    float ResetFloat; // 0x30
    char pad_34[0xc];
    static UInterpTrackInstFloatAnimBPParam* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

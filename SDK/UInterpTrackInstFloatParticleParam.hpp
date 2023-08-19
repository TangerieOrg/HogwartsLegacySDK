#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
#pragma pack(push, 1)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst {
public:
    float ResetFloat; // 0x28
    char pad_2c[0x4];
    static UInterpTrackInstFloatParticleParam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

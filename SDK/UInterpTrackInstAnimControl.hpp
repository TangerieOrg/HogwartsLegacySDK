#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
#pragma pack(push, 1)
class UInterpTrackInstAnimControl : public UInterpTrackInst {
public:
    float LastUpdatePosition; // 0x28
    char pad_2c[0x4];
    static UInterpTrackInstAnimControl* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

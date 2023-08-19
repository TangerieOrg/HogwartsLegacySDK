#pragma once
#include <cstdint>
#include "UInterpTrackInstProperty.hpp"
#pragma pack(push, 1)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty {
public:
    char pad_50[0x8];
    float ResetFloat; // 0x58
    char pad_5c[0x4];
    static UInterpTrackInstFloatProp* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

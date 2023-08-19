#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UInterpTrackInstProperty.hpp"
#pragma pack(push, 1)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty {
public:
    char pad_50[0x8];
    FColor ResetColor; // 0x58
    char pad_5c[0x4];
    static UInterpTrackInstColorProp* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

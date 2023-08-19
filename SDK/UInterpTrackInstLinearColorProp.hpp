#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UInterpTrackInstProperty.hpp"
#pragma pack(push, 1)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty {
public:
    char pad_50[0x8];
    FLinearColor ResetColor; // 0x58
    static UInterpTrackInstLinearColorProp* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

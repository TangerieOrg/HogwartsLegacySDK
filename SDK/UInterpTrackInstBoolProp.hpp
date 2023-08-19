#pragma once
#include <cstdint>
#include "UInterpTrackInstProperty.hpp"
#pragma pack(push, 1)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty {
public:
    char pad_50[0x10];
    bool ResetBool; // 0x60
    char pad_61[0x7];
    static UInterpTrackInstBoolProp* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

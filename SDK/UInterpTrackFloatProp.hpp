#pragma once
#include <cstdint>
#include "UInterpTrackFloatBase.hpp"
#pragma pack(push, 1)
class UInterpTrackFloatProp : public UInterpTrackFloatBase {
public:
    FName PropertyName; // 0x90
    static UInterpTrackFloatProp* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

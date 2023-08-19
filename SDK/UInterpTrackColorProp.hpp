#pragma once
#include <cstdint>
#include "UInterpTrackVectorBase.hpp"
#pragma pack(push, 1)
class UInterpTrackColorProp : public UInterpTrackVectorBase {
public:
    FName PropertyName; // 0x90
    static UInterpTrackColorProp* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

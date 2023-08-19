#pragma once
#include <cstdint>
#include "UInterpTrackLinearColorBase.hpp"
#pragma pack(push, 1)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase {
public:
    FName PropertyName; // 0x90
    static UInterpTrackLinearColorProp* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

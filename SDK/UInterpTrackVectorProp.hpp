#pragma once
#include <cstdint>
#include "UInterpTrackVectorBase.hpp"
#pragma pack(push, 1)
class UInterpTrackVectorProp : public UInterpTrackVectorBase {
public:
    FName PropertyName; // 0x90
    static UInterpTrackVectorProp* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

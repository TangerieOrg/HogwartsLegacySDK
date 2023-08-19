#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterpTrackInstProperty.hpp"
#pragma pack(push, 1)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty {
public:
    char pad_50[0x8];
    FVector ResetVector; // 0x58
    char pad_64[0x4];
    static UInterpTrackInstVectorProp* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

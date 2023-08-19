#pragma once
#include <cstdint>
#include "FAnimControlTrackKey.hpp"
#include "UInterpTrackFloatBase.hpp"
#pragma pack(push, 1)
class UInterpTrackAnimControl : public UInterpTrackFloatBase {
public:
    FName SlotName; // 0x90
    TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
    uint8_t bSkipAnimNotifiers : 1; // 0xa8
    uint8_t pad_bitfield_a8_1 : 7;
    char pad_a9[0x7];
    static UInterpTrackAnimControl* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)

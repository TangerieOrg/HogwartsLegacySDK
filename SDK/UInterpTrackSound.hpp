#pragma once
#include <cstdint>
#include "FSoundTrackKey.hpp"
#include "UInterpTrackVectorBase.hpp"
#pragma pack(push, 1)
class UInterpTrackSound : public UInterpTrackVectorBase {
public:
    TArray<FSoundTrackKey> Sounds; // 0x90
    uint8_t bPlayOnReverse : 1; // 0xa0
    uint8_t bContinueSoundOnMatineeEnd : 1; // 0xa0
    uint8_t bSuppressSubtitles : 1; // 0xa0
    uint8_t bTreatAsDialogue : 1; // 0xa0
    uint8_t bAttach : 1; // 0xa0
    uint8_t pad_bitfield_a0_5 : 3;
    char pad_a1[0x7];
    static UInterpTrackSound* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

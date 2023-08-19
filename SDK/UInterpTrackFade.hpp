#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UInterpTrackFloatBase.hpp"
#pragma pack(push, 1)
class UInterpTrackFade : public UInterpTrackFloatBase {
public:
    uint8_t bPersistFade : 1; // 0x90
    uint8_t bFadeAudio : 1; // 0x90
    uint8_t pad_bitfield_90_2 : 6;
    char pad_91[0x3];
    FLinearColor FadeColor; // 0x94
    char pad_a4[0x4];
    static UInterpTrackFade* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

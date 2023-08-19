#pragma once
#include <cstdint>
#include "FAnimationTrack.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimRequest_FacialEmotion : public UObject {
public:
    char pad_28[0x18];
    FAnimationTrack FacialEmotionTrackA; // 0x40
    char pad_210[0x10];
    FAnimationTrack FacialEmotionTrackB; // 0x220
    char pad_3f0[0x30];
    static UAnimRequest_FacialEmotion* StaticClass();
}; // Size: 0x420
#pragma pack(pop)

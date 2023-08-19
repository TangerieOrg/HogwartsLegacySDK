#pragma once
#include <cstdint>
#include "FAnimationTrack.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimRequest_FacialAnimation : public UObject {
public:
    char pad_28[0x18];
    FAnimationTrack FacialEmotionTrackA; // 0x40
    FAnimationTrack FacialEmotionTrackB; // 0x210
    char pad_3e0[0x30];
    static UAnimRequest_FacialAnimation* StaticClass();
}; // Size: 0x410
#pragma pack(pop)

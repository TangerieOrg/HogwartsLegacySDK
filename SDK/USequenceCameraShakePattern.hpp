#pragma once
#include <cstdint>
#include "UCameraShakePattern.hpp"
class UCameraAnimationSequence;
class USequenceCameraShakeSequencePlayer;
class USequenceCameraShakeCameraStandIn;
#pragma pack(push, 1)
class USequenceCameraShakePattern : public UCameraShakePattern {
public:
    UCameraAnimationSequence* Sequence; // 0x28
    float PlayRate; // 0x30
    float Scale; // 0x34
    float BlendInTime; // 0x38
    float BlendOutTime; // 0x3c
    float RandomSegmentDuration; // 0x40
    bool bRandomSegment; // 0x44
    char pad_45[0x3];
    USequenceCameraShakeSequencePlayer* Player; // 0x48
    USequenceCameraShakeCameraStandIn* CameraStandIn; // 0x50
    static USequenceCameraShakePattern* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

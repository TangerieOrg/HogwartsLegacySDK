#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_StrafeMoveStartStop : public UAblAnimationTagChooser {
public:
    FVector FootPositionWeight; // 0x50
    FVector FootVelocityWeight; // 0x5c
    float FootMatchSearchTime; // 0x68
    bool bStopping; // 0x6c
    char pad_6d[0x3];
    float StickFlickTime; // 0x70
    float ShuffleStepInterpTime; // 0x74
    static UAblAnimationTagChooser_StrafeMoveStartStop* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

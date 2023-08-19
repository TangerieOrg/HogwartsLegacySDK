#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_TurnMoveStop : public UAblAnimationTagChooser {
public:
    FVector FootPositionWeight; // 0x50
    FVector FootVelocityWeight; // 0x5c
    float StickFlickTime; // 0x68
    float ShortStopTime; // 0x6c
    float ShuffleStepInterpTime; // 0x70
    float PivotStopTime; // 0x74
    float StartStopTime; // 0x78
    float NoRootStopTime; // 0x7c
    bool bEnableFwdStart2Stop; // 0x80
    char pad_81[0x7];
    static UAblAnimationTagChooser_TurnMoveStop* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

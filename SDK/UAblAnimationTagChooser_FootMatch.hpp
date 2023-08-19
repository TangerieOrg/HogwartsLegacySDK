#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_FootMatch : public UAblAnimationTagChooser {
public:
    float MinTimeIntoMotion; // 0x50
    float TimeIntoMotion; // 0x54
    float SourceTimeOffset; // 0x58
    FVector FootPositionWeight; // 0x5c
    FVector FootVelocityWeight; // 0x68
    char pad_74[0x4];
    static UAblAnimationTagChooser_FootMatch* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

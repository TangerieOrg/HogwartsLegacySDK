#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_CrouchTurnMoveStart : public UAblAnimationTagChooser {
public:
    bool bMotionMatching; // 0x50
    char pad_51[0x3];
    FVector FootPositionWeight; // 0x54
    FVector FootVelocityWeight; // 0x60
    char pad_6c[0x4];
    static UAblAnimationTagChooser_CrouchTurnMoveStart* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

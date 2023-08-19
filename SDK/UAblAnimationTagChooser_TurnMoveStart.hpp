#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_TurnMoveStart : public UAblAnimationTagChooser {
public:
    FVector FootPositionWeight; // 0x50
    FVector FootVelocityWeight; // 0x5c
    float ShortStartTime; // 0x68
    char pad_6c[0x4];
    static UAblAnimationTagChooser_TurnMoveStart* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

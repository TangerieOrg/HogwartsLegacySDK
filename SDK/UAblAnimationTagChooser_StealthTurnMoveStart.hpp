#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_StealthTurnMoveStart : public UAblAnimationTagChooser {
public:
    FVector FootPositionWeight; // 0x50
    FVector FootVelocityWeight; // 0x5c
    static UAblAnimationTagChooser_StealthTurnMoveStart* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

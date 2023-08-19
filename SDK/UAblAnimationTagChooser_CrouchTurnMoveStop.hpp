#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_CrouchTurnMoveStop : public UAblAnimationTagChooser {
public:
    FVector FootPositionWeight; // 0x50
    FVector FootVelocityWeight; // 0x5c
    static UAblAnimationTagChooser_CrouchTurnMoveStop* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

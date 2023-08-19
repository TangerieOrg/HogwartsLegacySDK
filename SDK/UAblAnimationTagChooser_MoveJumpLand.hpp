#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_MoveJumpLand : public UAblAnimationTagChooser {
public:
    FVector2D FootMatchTimeRange; // 0x50
    FVector FootPositionWeight; // 0x58
    FVector FootVelocityWeight; // 0x64
    static UAblAnimationTagChooser_MoveJumpLand* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

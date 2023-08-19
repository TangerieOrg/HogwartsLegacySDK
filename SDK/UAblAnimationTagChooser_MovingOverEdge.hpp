#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_MovingOverEdge : public UAblAnimationTagChooser {
public:
    float TimeIntoMotion; // 0x50
    FVector FootPositionWeight; // 0x54
    FVector FootVelocityWeight; // 0x60
    char pad_6c[0x4];
    static UAblAnimationTagChooser_MovingOverEdge* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

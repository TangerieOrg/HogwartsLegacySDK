#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_ButtSlide : public URootMotionModifier {
public:
    FVector LastVelocity; // 0x50
    char pad_5c[0x4];
    static URootMotionModifier_ButtSlide* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

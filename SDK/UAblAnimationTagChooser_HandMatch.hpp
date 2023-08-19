#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_HandMatch : public UAblAnimationTagChooser {
public:
    FVector HandsPositionWeight; // 0x50
    FVector HandsVelocityWeight; // 0x5c
    static UAblAnimationTagChooser_HandMatch* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

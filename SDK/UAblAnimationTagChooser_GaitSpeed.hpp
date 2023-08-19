#pragma once
#include <cstdint>
#include "ESpeedType\Type.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_GaitSpeed : public UAblAnimationTagChooser {
public:
    char pad_50[0x50];
    ESpeedType::Type SpeedType; // 0xa0
    char pad_a1[0x7];
    static UAblAnimationTagChooser_GaitSpeed* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

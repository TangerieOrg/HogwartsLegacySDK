#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_ThrowItem : public UAblAnimationTagChooser {
public:
    float ThrowLongDistance; // 0x50
    float ThrowMedDistance; // 0x54
    static UAblAnimationTagChooser_ThrowItem* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

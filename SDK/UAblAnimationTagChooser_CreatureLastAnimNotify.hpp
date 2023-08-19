#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_CreatureLastAnimNotify : public UAblAnimationTagChooser {
public:
    TArray<FName> Names; // 0x50
    static UAblAnimationTagChooser_CreatureLastAnimNotify* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

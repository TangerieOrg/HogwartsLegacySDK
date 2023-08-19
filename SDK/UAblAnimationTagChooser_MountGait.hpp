#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_MountGait : public UAblAnimationTagChooser {
public:
    char pad_50[0x50];
    static UAblAnimationTagChooser_MountGait* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

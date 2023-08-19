#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_Array : public UAblAnimationTagChooser {
public:
    TArray<UAblAnimationTagChooser*> TagChooserArray; // 0x50
    static UAblAnimationTagChooser_Array* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

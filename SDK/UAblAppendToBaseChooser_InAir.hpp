#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#pragma pack(push, 1)
class UAblAppendToBaseChooser_InAir : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    char pad_28[0x8];
    static UAblAppendToBaseChooser_InAir* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

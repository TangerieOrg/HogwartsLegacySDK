#pragma once
#include <cstdint>
#include "EMultiFXOrientation.hpp"
#include "UFXAdjustments.hpp"
#pragma pack(push, 1)
class UFXAdjustments_Orientation : public UFXAdjustments {
public:
    EMultiFXOrientation Orientation; // 0x28
    char pad_29[0x7];
    static UFXAdjustments_Orientation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UAnyButtonInputBehavior.hpp"
#pragma pack(push, 1)
class UClickDragInputBehavior : public UAnyButtonInputBehavior {
public:
    char pad_80[0xa0];
    bool bUpdateModifiersDuringDrag; // 0x120
    char pad_121[0x1f];
    static UClickDragInputBehavior* StaticClass();
}; // Size: 0x140
#pragma pack(pop)

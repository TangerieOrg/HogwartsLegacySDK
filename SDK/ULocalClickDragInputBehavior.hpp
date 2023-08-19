#pragma once
#include <cstdint>
#include "UClickDragInputBehavior.hpp"
#pragma pack(push, 1)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior {
public:
    char pad_140[0x140];
    static ULocalClickDragInputBehavior* StaticClass();
}; // Size: 0x280
#pragma pack(pop)

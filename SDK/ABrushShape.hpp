#pragma once
#include <cstdint>
#include "ABrush.hpp"
#pragma pack(push, 1)
class ABrushShape : public ABrush {
public:
    static ABrushShape* StaticClass();
}; // Size: 0x280
#pragma pack(pop)

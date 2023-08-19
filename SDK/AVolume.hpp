#pragma once
#include <cstdint>
#include "ABrush.hpp"
#pragma pack(push, 1)
class AVolume : public ABrush {
public:
    static AVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)

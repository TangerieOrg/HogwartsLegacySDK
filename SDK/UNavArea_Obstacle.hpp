#pragma once
#include <cstdint>
#include "UNavArea.hpp"
#pragma pack(push, 1)
class UNavArea_Obstacle : public UNavArea {
public:
    static UNavArea_Obstacle* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

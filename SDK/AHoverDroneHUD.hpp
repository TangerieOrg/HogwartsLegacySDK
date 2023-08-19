#pragma once
#include <cstdint>
#include "AHUD.hpp"
#pragma pack(push, 1)
class AHoverDroneHUD : public AHUD {
public:
    char pad_338[0x20];
    static AHoverDroneHUD* StaticClass();
}; // Size: 0x358
#pragma pack(pop)

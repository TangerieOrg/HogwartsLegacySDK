#pragma once
#include <cstdint>
#include "AHUD.hpp"
#pragma pack(push, 1)
class APreloadArchitectHUD : public AHUD {
public:
    static APreloadArchitectHUD* StaticClass();
    void TogglePreloadArchitectHUD();
}; // Size: 0x338
#pragma pack(pop)

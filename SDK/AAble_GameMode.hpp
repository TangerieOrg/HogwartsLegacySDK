#pragma once
#include <cstdint>
#include "AGameMode.hpp"
#pragma pack(push, 1)
class AAble_GameMode : public AGameMode {
public:
    char pad_330[0x20];
    static AAble_GameMode* StaticClass();
}; // Size: 0x350
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UIpNetDriver.hpp"
#pragma pack(push, 1)
class USteamNetDriver : public UIpNetDriver {
public:
    char pad_7d0[0x8];
    static USteamNetDriver* StaticClass();
}; // Size: 0x7d8
#pragma pack(pop)

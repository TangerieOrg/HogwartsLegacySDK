#pragma once
#include <cstdint>
#include "UIpConnection.hpp"
#pragma pack(push, 1)
class USteamNetConnection : public UIpConnection {
public:
    bool bIsPassthrough; // 0x1c48
    char pad_1c49[0x7];
    static USteamNetConnection* StaticClass();
}; // Size: 0x1c50
#pragma pack(pop)

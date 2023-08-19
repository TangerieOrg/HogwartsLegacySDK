#pragma once
#include <cstdint>
#include "UNetConnection.hpp"
#pragma pack(push, 1)
class UIpConnection : public UNetConnection {
public:
    char pad_1ba8[0x50];
    float SocketErrorDisconnectDelay; // 0x1bf8
    char pad_1bfc[0x4c];
    static UIpConnection* StaticClass();
}; // Size: 0x1c48
#pragma pack(pop)

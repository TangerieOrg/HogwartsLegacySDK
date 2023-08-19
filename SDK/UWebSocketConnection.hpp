#pragma once
#include <cstdint>
#include "UNetConnection.hpp"
#pragma pack(push, 1)
class UWebSocketConnection : public UNetConnection {
public:
    char pad_1ba8[0x10];
    static UWebSocketConnection* StaticClass();
}; // Size: 0x1bb8
#pragma pack(pop)

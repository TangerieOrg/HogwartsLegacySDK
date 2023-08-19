#pragma once
#include <cstdint>
#include "UNetDriver.hpp"
#pragma pack(push, 1)
class UWebSocketNetDriver : public UNetDriver {
public:
    int32_t WebSocketPort; // 0x760
    char pad_764[0xc];
    static UWebSocketNetDriver* StaticClass();
}; // Size: 0x770
#pragma pack(pop)

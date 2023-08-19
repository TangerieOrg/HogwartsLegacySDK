#pragma once
#include <cstdint>
#include "UNetConnection.hpp"
#pragma pack(push, 1)
class UReplayNetConnection : public UNetConnection {
public:
    char pad_1ba8[0x800];
    static UReplayNetConnection* StaticClass();
}; // Size: 0x23a8
#pragma pack(pop)

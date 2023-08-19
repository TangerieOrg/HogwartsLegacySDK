#pragma once
#include <cstdint>
#include "UNetConnection.hpp"
#pragma pack(push, 1)
class USimulatedClientNetConnection : public UNetConnection {
public:
    static USimulatedClientNetConnection* StaticClass();
}; // Size: 0x1ba8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UNetConnection.hpp"
#pragma pack(push, 1)
class UDemoNetConnection : public UNetConnection {
public:
    char pad_1ba8[0x70];
    static UDemoNetConnection* StaticClass();
}; // Size: 0x1c18
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UNetConnection.hpp"
#pragma pack(push, 1)
class UChildConnection : public UNetConnection {
public:
    UNetConnection* Parent; // 0x1ba8
    static UChildConnection* StaticClass();
}; // Size: 0x1bb0
#pragma pack(pop)

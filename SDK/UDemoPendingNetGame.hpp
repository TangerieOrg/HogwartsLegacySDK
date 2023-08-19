#pragma once
#include <cstdint>
#include "UPendingNetGame.hpp"
#pragma pack(push, 1)
class UDemoPendingNetGame : public UPendingNetGame {
public:
    static UDemoPendingNetGame* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

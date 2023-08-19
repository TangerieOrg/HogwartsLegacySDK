#pragma once
#include <cstdint>
#include "ACreatureGrowthHandler.hpp"
#pragma pack(push, 1)
class ACreatureGrowUpHandler : public ACreatureGrowthHandler {
public:
    static ACreatureGrowUpHandler* StaticClass();
}; // Size: 0x280
#pragma pack(pop)

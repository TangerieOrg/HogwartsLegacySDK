#pragma once
#include <cstdint>
#include "ACreatureGrowthHandler.hpp"
#pragma pack(push, 1)
class ACreatureHatchHandler : public ACreatureGrowthHandler {
public:
    static ACreatureHatchHandler* StaticClass();
}; // Size: 0x280
#pragma pack(pop)

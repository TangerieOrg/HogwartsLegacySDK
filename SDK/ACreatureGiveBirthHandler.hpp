#pragma once
#include <cstdint>
#include "ACreatureGrowthHandler.hpp"
#pragma pack(push, 1)
class ACreatureGiveBirthHandler : public ACreatureGrowthHandler {
public:
    static ACreatureGiveBirthHandler* StaticClass();
}; // Size: 0x280
#pragma pack(pop)

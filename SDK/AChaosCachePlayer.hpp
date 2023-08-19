#pragma once
#include <cstdint>
#include "AChaosCacheManager.hpp"
#pragma pack(push, 1)
class AChaosCachePlayer : public AChaosCacheManager {
public:
    static AChaosCachePlayer* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)

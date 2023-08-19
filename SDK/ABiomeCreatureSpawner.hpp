#pragma once
#include <cstdint>
#include "ADynamicObjectVolume.hpp"
#pragma pack(push, 1)
class ABiomeCreatureSpawner : public ADynamicObjectVolume {
public:
    char pad_1668[0x8];
    static ABiomeCreatureSpawner* StaticClass();
}; // Size: 0x1670
#pragma pack(pop)

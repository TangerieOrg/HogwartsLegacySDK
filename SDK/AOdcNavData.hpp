#pragma once
#include <cstdint>
#include "ANavigationData.hpp"
#pragma pack(push, 1)
class AOdcNavData : public ANavigationData {
public:
    uint32_t Layer; // 0x450
    char pad_454[0x4];
    static AOdcNavData* StaticClass();
}; // Size: 0x458
#pragma pack(pop)

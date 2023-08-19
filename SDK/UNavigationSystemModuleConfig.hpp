#pragma once
#include <cstdint>
#include "UNavigationSystemConfig.hpp"
#pragma pack(push, 1)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig {
public:
    uint8_t bStrictlyStatic : 1; // 0x50
    uint8_t bCreateOnClient : 1; // 0x50
    uint8_t bAutoSpawnMissingNavData : 1; // 0x50
    uint8_t bSpawnNavDataInNavBoundsLevel : 1; // 0x50
    uint8_t pad_bitfield_50_4 : 4;
    char pad_51[0x7];
    static UNavigationSystemModuleConfig* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UNavigationSystemConfig.hpp"
#pragma pack(push, 1)
class UNullNavSysConfig : public UNavigationSystemConfig {
public:
    static UNullNavSysConfig* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

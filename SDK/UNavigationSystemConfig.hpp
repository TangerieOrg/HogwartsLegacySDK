#pragma once
#include <cstdint>
#include "FNavAgentSelector.hpp"
#include "FSoftClassPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavigationSystemConfig : public UObject {
public:
    FSoftClassPath NavigationSystemClass; // 0x28
    FNavAgentSelector SupportedAgentsMask; // 0x40
    FName DefaultAgentName; // 0x44
    uint8_t bIsOverriden : 1; // 0x4c
    uint8_t pad_bitfield_4c_1 : 7;
    char pad_4d[0x3];
    static UNavigationSystemConfig* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

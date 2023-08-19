#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ENavSystemOverridePolicy.hpp"
class UNavigationSystemConfig;
#pragma pack(push, 1)
class ANavSystemConfigOverride : public AActor {
public:
    UNavigationSystemConfig* NavigationSystemConfig; // 0x248
    ENavSystemOverridePolicy OverridePolicy; // 0x250
    uint8_t bLoadOnClient : 1; // 0x251
    uint8_t pad_bitfield_251_1 : 7;
    char pad_252[0x6];
    static ANavSystemConfigOverride* StaticClass();
}; // Size: 0x258
#pragma pack(pop)

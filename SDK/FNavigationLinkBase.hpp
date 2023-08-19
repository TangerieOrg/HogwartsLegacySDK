#pragma once
#include <cstdint>
#include "ENavLinkDirection\Type.hpp"
#include "FNavAgentSelector.hpp"
class UClass;
#pragma pack(push, 1)
struct FNavigationLinkBase {
    float LeftProjectHeight; // 0x0
    float MaxFallDownLength; // 0x4
    char pad_8[0x4];
    float SnapRadius; // 0xc
    float SnapHeight; // 0x10
    FNavAgentSelector SupportedAgents; // 0x14
    uint8_t bSupportsAgent0 : 1; // 0x18
    uint8_t bSupportsAgent1 : 1; // 0x18
    uint8_t bSupportsAgent2 : 1; // 0x18
    uint8_t bSupportsAgent3 : 1; // 0x18
    uint8_t bSupportsAgent4 : 1; // 0x18
    uint8_t bSupportsAgent5 : 1; // 0x18
    uint8_t bSupportsAgent6 : 1; // 0x18
    uint8_t bSupportsAgent7 : 1; // 0x18
    uint8_t bSupportsAgent8 : 1; // 0x19
    uint8_t bSupportsAgent9 : 1; // 0x19
    uint8_t bSupportsAgent10 : 1; // 0x19
    uint8_t bSupportsAgent11 : 1; // 0x19
    uint8_t bSupportsAgent12 : 1; // 0x19
    uint8_t bSupportsAgent13 : 1; // 0x19
    uint8_t bSupportsAgent14 : 1; // 0x19
    uint8_t bSupportsAgent15 : 1; // 0x19
    char pad_1a[0x2];
    ENavLinkDirection::Type Direction; // 0x1c
    uint8_t bUseSnapHeight : 1; // 0x1d
    uint8_t bSnapToCheapestArea : 1; // 0x1d
    uint8_t bCustomFlag0 : 1; // 0x1d
    uint8_t bCustomFlag1 : 1; // 0x1d
    uint8_t bCustomFlag2 : 1; // 0x1d
    uint8_t bCustomFlag3 : 1; // 0x1d
    uint8_t bCustomFlag4 : 1; // 0x1d
    uint8_t bCustomFlag5 : 1; // 0x1d
    uint8_t bCustomFlag6 : 1; // 0x1e
    uint8_t bCustomFlag7 : 1; // 0x1e
    uint8_t pad_bitfield_1e_2 : 6;
    char pad_1f[0x1];
    UClass* AreaClass; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)

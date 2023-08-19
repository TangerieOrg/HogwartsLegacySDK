#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FNavAgentSelector.hpp"
#include "UNavAreaBase.hpp"
#pragma pack(push, 1)
class UNavArea : public UNavAreaBase {
public:
    float DefaultCost; // 0x30
    float FixedAreaEnteringCost; // 0x34
    FColor DrawColor; // 0x38
    FNavAgentSelector SupportedAgents; // 0x3c
    uint8_t bSupportsAgent0 : 1; // 0x40
    uint8_t bSupportsAgent1 : 1; // 0x40
    uint8_t bSupportsAgent2 : 1; // 0x40
    uint8_t bSupportsAgent3 : 1; // 0x40
    uint8_t bSupportsAgent4 : 1; // 0x40
    uint8_t bSupportsAgent5 : 1; // 0x40
    uint8_t bSupportsAgent6 : 1; // 0x40
    uint8_t bSupportsAgent7 : 1; // 0x40
    uint8_t bSupportsAgent8 : 1; // 0x41
    uint8_t bSupportsAgent9 : 1; // 0x41
    uint8_t bSupportsAgent10 : 1; // 0x41
    uint8_t bSupportsAgent11 : 1; // 0x41
    uint8_t bSupportsAgent12 : 1; // 0x41
    uint8_t bSupportsAgent13 : 1; // 0x41
    uint8_t bSupportsAgent14 : 1; // 0x41
    uint8_t bSupportsAgent15 : 1; // 0x41
    char pad_42[0x6];
    static UNavArea* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

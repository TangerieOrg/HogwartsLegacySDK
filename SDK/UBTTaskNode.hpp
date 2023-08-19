#pragma once
#include <cstdint>
#include "UBTNode.hpp"
class UBTService;
#pragma pack(push, 1)
class UBTTaskNode : public UBTNode {
public:
    TArray<UBTService*> Services; // 0x58
    uint8_t bIgnoreRestartSelf : 1; // 0x68
    uint8_t pad_bitfield_68_1 : 7;
    char pad_69[0x7];
    static UBTTaskNode* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

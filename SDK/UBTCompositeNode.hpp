#pragma once
#include <cstdint>
#include "FBTCompositeChild.hpp"
#include "UBTNode.hpp"
class UBTService;
#pragma pack(push, 1)
class UBTCompositeNode : public UBTNode {
public:
    TArray<FBTCompositeChild> Children; // 0x58
    TArray<UBTService*> Services; // 0x68
    char pad_78[0x10];
    uint8_t bApplyDecoratorScope : 1; // 0x88
    uint8_t pad_bitfield_88_1 : 7;
    char pad_89[0x7];
    static UBTCompositeNode* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AConsumablePotionItemTool.hpp"
#pragma pack(push, 1)
class AIncompletePolyjuiceItemTool : public AConsumablePotionItemTool {
public:
    float UsageDistance; // 0x488
    char pad_48c[0xc];
    static AIncompletePolyjuiceItemTool* StaticClass();
}; // Size: 0x498
#pragma pack(pop)

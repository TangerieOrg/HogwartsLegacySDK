#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
#pragma pack(push, 1)
class AThrowableInventoryItemTool : public AInventoryItemTool {
public:
    float MaxDistance; // 0x430
    char pad_434[0x4];
    static AThrowableInventoryItemTool* StaticClass();
    float GetMaxDistance();
}; // Size: 0x438
#pragma pack(pop)

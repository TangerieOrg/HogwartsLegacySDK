#pragma once
#include <cstdint>
#include "UFieldGuideButtonBase.hpp"
#pragma pack(push, 1)
class UFieldGuideButton_Inventory : public UFieldGuideButtonBase {
public:
    TArray<FName> NewItemCategories; // 0x4b0
    static UFieldGuideButton_Inventory* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)

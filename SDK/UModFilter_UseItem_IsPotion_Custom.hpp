#pragma once
#include <cstdint>
#include "UModFilter_UseItem_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UModFilter_UseItem_IsPotion_Custom : public UModFilter_UseItem_Base {
public:
    UClass* PotionType; // 0x30
    static UModFilter_UseItem_IsPotion_Custom* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

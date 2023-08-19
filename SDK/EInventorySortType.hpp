#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInventorySortType : uint8_t {
    Inventory_Sort_Type = 0,
    Inventory_Sort_Newest = 1,
    Inventory_Sort_Value = 2,
    Inventory_Sort_Alphabetical = 3,
    Inventory_Sort_Count = 4,
    Inventory_Sort_MAX = 5,
};
#pragma pack(pop)

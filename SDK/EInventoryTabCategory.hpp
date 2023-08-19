#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInventoryTabCategory : uint8_t {
    DefaultInventory = 0,
    QuestItems = 1,
    EInventoryTabCategory_MAX = 2,
};
#pragma pack(pop)

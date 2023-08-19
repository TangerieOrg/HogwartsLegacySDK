#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInventoryObjectType : uint8_t {
    INVENTORY_OBJECT_TYPE_STANDARD = 0,
    INVENTORY_OBJECT_TYPE_BEAST = 1,
    INVENTORY_OBJECT_TYPE_NAMED_BEAST = 2,
    INVENTORY_OBJECT_TYPE_MAX = 3,
};
#pragma pack(pop)

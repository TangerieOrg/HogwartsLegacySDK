#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInventoryObjectSpawnType : uint8_t {
    InventoryObjectInLevel = 0,
    InventoryObjectDropped = 1,
    InventoryObjectSpawner = 2,
    EInventoryObjectSpawnType_MAX = 3,
};
#pragma pack(pop)

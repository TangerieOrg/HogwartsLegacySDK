#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStationDataType : uint8_t {
    TYPE_OWNED = 0,
    TYPE_MANAGED = 1,
    TYPE_SITE = 2,
    TYPE_SPAWNED = 3,
    TYPE_PLAYER = 4,
    TYPE_PORTAL = 5,
    TYPE_FLUID = 6,
    TYPE_MAX = 7,
};
#pragma pack(pop)

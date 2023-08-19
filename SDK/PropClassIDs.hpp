#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum PropClassIDs : uint8_t {
    PROP_CLASS_BED = 0,
    PROP_CLASS_BENCH = 1,
    PROP_CLASS_CHAIR = 2,
    PROP_CLASS_CUSTOM = 3,
    PROP_CLASS_DESK = 4,
    PROP_CLASS_DYNAMIC = 5,
    PROP_CLASS_GROUND = 6,
    PROP_CLASS_INTERACTION = 7,
    PROP_CLASS_LOCATION = 8,
    PROP_CLASS_NONE = 9,
    PROP_CLASS_OCCUPATION = 10,
    PROP_CLASS_STAIRS = 11,
    PROP_CLASS_STAND = 12,
    PROP_CLASS_TABLE = 13,
    PROP_CLASS_COUNT = 14,
    PROP_CLASS_MAX = 15,
};
#pragma pack(pop)

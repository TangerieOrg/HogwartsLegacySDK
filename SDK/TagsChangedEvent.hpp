#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum TagsChangedEvent : uint8_t {
    TagAdded = 0,
    TagRemoved = 1,
    TagsChangedEvent_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureNeed : uint8_t {
    Fed = 0,
    InteractedWith = 1,
    Count = 2,
    ECreatureNeed_MAX = 3,
};
#pragma pack(pop)

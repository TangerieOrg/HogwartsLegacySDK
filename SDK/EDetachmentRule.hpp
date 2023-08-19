#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDetachmentRule : uint8_t {
    KeepRelative = 0,
    KeepWorld = 1,
    EDetachmentRule_MAX = 2,
};
#pragma pack(pop)

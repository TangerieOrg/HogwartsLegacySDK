#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAttachmentRule : uint8_t {
    KeepRelative = 0,
    KeepWorld = 1,
    SnapToTarget = 2,
    EAttachmentRule_MAX = 3,
};
#pragma pack(pop)

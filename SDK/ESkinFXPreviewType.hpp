#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXPreviewType : uint8_t {
    StaticMesh = 0,
    SkeletalMesh = 1,
    ESkinFXPreviewType_MAX = 2,
};
#pragma pack(pop)

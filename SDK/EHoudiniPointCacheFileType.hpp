#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoudiniPointCacheFileType : uint8_t {
    Invalid = 0,
    CSV = 1,
    JSON = 2,
    BJSON = 3,
    EHoudiniPointCacheFileType_MAX = 4,
};
#pragma pack(pop)

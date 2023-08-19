#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETwitterRequestMethod : uint8_t {
    TRM_Get = 0,
    TRM_Post = 1,
    TRM_Delete = 2,
    TRM_MAX = 3,
};
#pragma pack(pop)

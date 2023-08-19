#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERefPoseType : uint8_t {
    EIT_LocalSpace = 0,
    EIT_Additive = 1,
    EIT_MAX = 2,
};
#pragma pack(pop)

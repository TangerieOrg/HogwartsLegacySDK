#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureCageAnimation : uint8_t {
    Idle = 0,
    Alert = 1,
    Wounded = 2,
    ECreatureCageAnimation_MAX = 3,
};
#pragma pack(pop)

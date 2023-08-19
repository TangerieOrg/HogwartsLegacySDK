#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAblAbilityTaskResult : uint8_t {
    Successful = 0,
    Branched = 1,
    Interrupted = 2,
    EAblAbilityTaskResult_MAX = 3,
};
#pragma pack(pop)

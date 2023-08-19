#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMontagePlayReturnType : uint8_t {
    MontageLength = 0,
    Duration = 1,
    EMontagePlayReturnType_MAX = 2,
};
#pragma pack(pop)

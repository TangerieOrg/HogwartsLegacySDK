#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMIDCreationFlags : uint8_t {
    None = 0,
    Transient = 1,
    EMIDCreationFlags_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMirrorOperationMode : uint8_t {
    MirrorAndAppend = 0,
    MirrorExisting = 1,
    EMirrorOperationMode_MAX = 2,
};
#pragma pack(pop)

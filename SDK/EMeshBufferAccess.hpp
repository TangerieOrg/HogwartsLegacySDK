#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshBufferAccess {
    Default = 0,
    ForceCPUAndGPU = 1,
    EMeshBufferAccess_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMoviePipelineTextureStreamingMethod : uint8_t {
    None = 0,
    Disabled = 1,
    FullyLoad = 2,
    EMoviePipelineTextureStreamingMethod_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t {
    BlockSize256 = 0,
    BlockSize512 = 1,
    BlockSize1024 = 2,
    ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};
#pragma pack(pop)

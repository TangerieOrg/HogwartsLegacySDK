#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVoiceSampleRate : int32_t {
    Low16000Hz = 16000,
    Normal24000Hz = 24000,
    EVoiceSampleRate_MAX = 24001,
};
#pragma pack(pop)

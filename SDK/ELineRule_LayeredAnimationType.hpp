#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELineRule_LayeredAnimationType : uint8_t {
    OnlyWhenSpeaking = 0,
    OnlyWhenNotSpeaking = 1,
    Whenever = 2,
    ELineRule_MAX = 3,
};
#pragma pack(pop)

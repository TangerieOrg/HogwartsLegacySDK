#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFadeType : uint8_t {
    FadeIn = 0,
    FadeOut = 1,
    HoldFade = 2,
    Manual = 3,
    EFadeType_MAX = 4,
};
#pragma pack(pop)

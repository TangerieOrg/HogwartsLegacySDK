#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBakeScaleMethod : uint8_t {
    BakeFullScale = 0,
    BakeNonuniformScale = 1,
    DoNotBakeScale = 2,
    EBakeScaleMethod_MAX = 3,
};
#pragma pack(pop)

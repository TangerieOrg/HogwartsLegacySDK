#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraRendererMotionVectorSetting : int32_t {
    AutoDetect = 0,
    Precise = 1,
    Approximate = 2,
    Disable = 3,
    ENiagaraRendererMotionVectorSetting_MAX = 4,
};
#pragma pack(pop)

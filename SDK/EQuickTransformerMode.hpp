#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuickTransformerMode : uint8_t {
    AxisTranslation = 0,
    AxisRotation = 1,
    EQuickTransformerMode_MAX = 2,
};
#pragma pack(pop)

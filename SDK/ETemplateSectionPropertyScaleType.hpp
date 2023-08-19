#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETemplateSectionPropertyScaleType : int32_t {
    FloatProperty = 0,
    TransformPropertyLocationOnly = 1,
    TransformPropertyRotationOnly = 2,
    ETemplateSectionPropertyScaleType_MAX = 3,
};
#pragma pack(pop)

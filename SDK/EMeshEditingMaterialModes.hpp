#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshEditingMaterialModes : int32_t {
    ExistingMaterial = 0,
    Diffuse = 1,
    Grey = 2,
    Soft = 3,
    TangentNormal = 4,
    Custom = 5,
    EMeshEditingMaterialModes_MAX = 6,
};
#pragma pack(pop)

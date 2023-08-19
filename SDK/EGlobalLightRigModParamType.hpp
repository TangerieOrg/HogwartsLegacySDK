#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightRigModParamType {
    NoType = 0,
    FloatType = 1,
    BoolType = 2,
    ColorType = 3,
    LinearColorType = 4,
    VectorType = 5,
    TextureType = 6,
    EGlobalLightRigModParamType_MAX = 7,
};
#pragma pack(pop)

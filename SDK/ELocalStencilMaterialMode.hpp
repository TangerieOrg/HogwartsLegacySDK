#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELocalStencilMaterialMode : uint8_t {
    Default = 0,
    DefaultMID = 1,
    Custom = 2,
    CustomMID = 3,
    ELocalStencilMaterialMode_MAX = 4,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialParameterAssociation : uint8_t {
    LayerParameter = 0,
    BlendParameter = 1,
    GlobalParameter = 2,
    EMaterialParameterAssociation_MAX = 3,
};
#pragma pack(pop)

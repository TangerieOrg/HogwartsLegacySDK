#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ECustomMaterialOutputType : uint8_t {
    CMOT_Float1 = 0,
    CMOT_Float2 = 1,
    CMOT_Float3 = 2,
    CMOT_Float4 = 3,
    CMOT_MaterialAttributes = 4,
    CMOT_MAX = 5,
};
#pragma pack(pop)

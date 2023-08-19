#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldCullingOperationType : uint8_t {
    Field_Culling_Inside = 0,
    Field_Culling_Outside = 1,
    Field_Culling_Operation_Max = 2,
    Field_Culling_MAX = 3,
};
#pragma pack(pop)

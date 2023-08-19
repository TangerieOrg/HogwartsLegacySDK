#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESetMaskConditionType : uint8_t {
    Field_Set_Always = 0,
    Field_Set_IFF_NOT_Interior = 1,
    Field_Set_IFF_NOT_Exterior = 2,
    Field_MaskCondition_Max = 3,
};
#pragma pack(pop)

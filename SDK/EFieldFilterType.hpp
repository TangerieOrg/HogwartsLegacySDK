#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldFilterType : uint8_t {
    Field_Filter_Dynamic = 0,
    Field_Filter_Kinematic = 1,
    Field_Filter_Static = 2,
    Field_Filter_All = 3,
    Field_Filter_Max = 4,
};
#pragma pack(pop)

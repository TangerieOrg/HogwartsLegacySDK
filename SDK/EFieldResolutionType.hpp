#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldResolutionType : uint8_t {
    Field_Resolution_Minimal = 0,
    Field_Resolution_DisabledParents = 1,
    Field_Resolution_Maximum = 2,
    Field_Resolution_Max = 3,
};
#pragma pack(pop)

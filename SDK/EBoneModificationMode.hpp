#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBoneModificationMode : uint8_t {
    BMM_Ignore = 0,
    BMM_Replace = 1,
    BMM_Additive = 2,
    BMM_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBroomDismountType : uint8_t {
    DiveDismount = 0,
    GroundDismount = 1,
    InstantDismount = 2,
    EBroomDismountType_MAX = 3,
};
#pragma pack(pop)

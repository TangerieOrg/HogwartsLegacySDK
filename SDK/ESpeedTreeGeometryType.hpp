#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESpeedTreeGeometryType : uint8_t {
    STG_Branch = 0,
    STG_Frond = 1,
    STG_Leaf = 2,
    STG_FacingLeaf = 3,
    STG_Billboard = 4,
    STG_MAX = 5,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ECollisionResponse : uint8_t {
    ECR_Ignore = 0,
    ECR_Overlap = 1,
    ECR_Block = 2,
    ECR_MAX = 3,
};
#pragma pack(pop)

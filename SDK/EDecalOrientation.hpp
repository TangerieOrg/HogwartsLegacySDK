#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDecalOrientation : uint8_t {
    Random = 0,
    Zero = 1,
    InstigatorToTarget = 2,
    TargetToInstigator = 3,
    EDecalOrientation_MAX = 4,
};
#pragma pack(pop)

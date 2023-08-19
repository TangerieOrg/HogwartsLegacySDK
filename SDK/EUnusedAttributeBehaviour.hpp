#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUnusedAttributeBehaviour {
    Copy = 0,
    Zero = 1,
    None = 2,
    MarkInvalid = 3,
    PassThrough = 4,
    EUnusedAttributeBehaviour_MAX = 5,
};
#pragma pack(pop)

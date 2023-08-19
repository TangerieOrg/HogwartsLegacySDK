#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPropertyAccessCopyBatch {
    InternalUnbatched = 0,
    ExternalUnbatched = 1,
    InternalBatched = 2,
    ExternalBatched = 3,
    Count = 4,
    EPropertyAccessCopyBatch_MAX = 5,
};
#pragma pack(pop)

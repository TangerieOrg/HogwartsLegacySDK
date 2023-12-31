#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUpdateRateShiftBucket : uint8_t {
    ShiftBucket0 = 0,
    ShiftBucket1 = 1,
    ShiftBucket2 = 2,
    ShiftBucket3 = 3,
    ShiftBucket4 = 4,
    ShiftBucket5 = 5,
    ShiftBucketMax = 6,
    EUpdateRateShiftBucket_MAX = 7,
};
#pragma pack(pop)

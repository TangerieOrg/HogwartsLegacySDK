#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMicroTransactionResult {
    MTR_Succeeded = 0,
    MTR_Failed = 1,
    MTR_Canceled = 2,
    MTR_RestoredFromServer = 3,
    MTR_MAX = 4,
};
#pragma pack(pop)

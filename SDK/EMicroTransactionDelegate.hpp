#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMicroTransactionDelegate {
    MTD_PurchaseQueryComplete = 0,
    MTD_PurchaseComplete = 1,
    MTD_MAX = 2,
};
#pragma pack(pop)

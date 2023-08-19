#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOnlineProxyStoreOfferDiscountType : uint8_t {
    NotOnSale = 0,
    Percentage = 1,
    DiscountAmount = 2,
    PayAmount = 3,
    EOnlineProxyStoreOfferDiscountType_MAX = 4,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "EOnlineProxyStoreOfferDiscountType.hpp"
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FOnlineProxyStoreOffer {
    FString OfferId; // 0x0
    char pad_10[0x60];
    int32_t RegularPrice; // 0x70
    char pad_74[0x1c];
    int32_t NumericPrice; // 0x90
    char pad_94[0x4];
    FString CurrencyCode; // 0x98
    FDateTime ReleaseDate; // 0xa8
    FDateTime ExpirationDate; // 0xb0
    EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8
    char pad_b9[0x57];
}; // Size: 0x110
#pragma pack(pop)

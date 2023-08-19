#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FOnlineOfferStruct {
    FString OfferId; // 0x0
    char pad_10[0x60];
    int32_t RegularPrice; // 0x70
    char pad_74[0x1c];
    int32_t NumericPrice; // 0x90
    char pad_94[0x4];
    FString CurrencyCode; // 0x98
    FDateTime ReleaseDate; // 0xa8
    FDateTime ExpirationDate; // 0xb0
    uint8_t DiscountType; // 0xb8
    bool Purchasable; // 0xb9
    bool Owned; // 0xba
    char pad_bb[0x5];
}; // Size: 0xc0
#pragma pack(pop)

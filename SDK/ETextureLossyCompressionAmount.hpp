#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureLossyCompressionAmount : uint8_t {
    TLCA_Default = 0,
    TLCA_None = 1,
    TLCA_Lowest = 2,
    TLCA_Low = 3,
    TLCA_Medium = 4,
    TLCA_High = 5,
    TLCA_Highest = 6,
    TLCA_MAX = 7,
};
#pragma pack(pop)

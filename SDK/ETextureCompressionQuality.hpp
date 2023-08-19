#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureCompressionQuality {
    TCQ_Default = 0,
    TCQ_Lowest = 1,
    TCQ_Low = 2,
    TCQ_Medium = 3,
    TCQ_High = 4,
    TCQ_Highest = 5,
    TCQ_MAX = 6,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMorphologyOperation : uint8_t {
    Dilate = 0,
    Contract = 1,
    Close = 2,
    Open = 3,
    EMorphologyOperation_MAX = 4,
};
#pragma pack(pop)

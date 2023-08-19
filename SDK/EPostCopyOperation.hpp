#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostCopyOperation : uint8_t {
    None = 0,
    LogicalNegateBool = 1,
    EPostCopyOperation_MAX = 2,
};
#pragma pack(pop)

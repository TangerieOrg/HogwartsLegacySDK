#pragma once
#include <cstdint>
namespace EMatrixColumns {
#pragma pack(push, 1)
enum Type : uint8_t {
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    EMatrixColumns_MAX = 4,
};
#pragma pack(pop)
}

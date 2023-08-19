#pragma once
#include <cstdint>
namespace ENavigationQueryResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    Invalid = 0,
    Error = 1,
    Fail = 2,
    Success = 3,
    ENavigationQueryResult_MAX = 4,
};
#pragma pack(pop)
}

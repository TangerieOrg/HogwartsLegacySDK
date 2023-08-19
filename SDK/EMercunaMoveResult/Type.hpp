#pragma once
#include <cstdint>
namespace EMercunaMoveResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    Success = 0,
    Failed = 1,
    Cancelled = 2,
    Blocked = 3,
    Invalid = 4,
    EMercunaMoveResult_MAX = 5,
};
#pragma pack(pop)
}

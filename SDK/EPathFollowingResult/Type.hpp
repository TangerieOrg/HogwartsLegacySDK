#pragma once
#include <cstdint>
namespace EPathFollowingResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    Success = 0,
    Blocked = 1,
    OffPath = 2,
    Aborted = 3,
    Skipped_DEPRECATED = 4,
    Invalid = 5,
    EPathFollowingResult_MAX = 6,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace EPawnActionResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    NotStarted = 0,
    InProgress = 1,
    Success = 2,
    Failed = 3,
    Aborted = 4,
    EPawnActionResult_MAX = 5,
};
#pragma pack(pop)
}

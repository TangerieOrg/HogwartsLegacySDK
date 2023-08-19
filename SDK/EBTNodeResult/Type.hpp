#pragma once
#include <cstdint>
namespace EBTNodeResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    Succeeded = 0,
    Failed = 1,
    Aborted = 2,
    InProgress = 3,
    EBTNodeResult_MAX = 4,
};
#pragma pack(pop)
}

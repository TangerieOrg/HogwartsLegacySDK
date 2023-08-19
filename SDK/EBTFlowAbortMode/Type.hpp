#pragma once
#include <cstdint>
namespace EBTFlowAbortMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowerPriority = 1,
    Self = 2,
    Both = 3,
    EBTFlowAbortMode_MAX = 4,
};
#pragma pack(pop)
}

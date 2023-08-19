#pragma once
#include <cstdint>
namespace EBehaviorResult {
#pragma pack(push, 1)
enum Type : uint8_t {
    Success = 0,
    Failed = 1,
    EBehaviorResult_MAX = 2,
};
#pragma pack(pop)
}

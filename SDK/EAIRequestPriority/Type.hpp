#pragma once
#include <cstdint>
namespace EAIRequestPriority {
#pragma pack(push, 1)
enum Type : uint8_t {
    SoftScript = 0,
    Logic = 1,
    HardScript = 2,
    Reaction = 3,
    Ultimate = 4,
    MAX = 5,
};
#pragma pack(pop)
}

#pragma once
#include <cstdint>
namespace ECombatAdditivePriority {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowestPriority = 1,
    UpperBodyIdle = 2,
    FullBodyUsage = 3,
    UpperBodyUsage = 4,
    Cinematic = 5,
    HighestPriority = 6,
    ECombatAdditivePriority_MAX = 7,
};
#pragma pack(pop)
}

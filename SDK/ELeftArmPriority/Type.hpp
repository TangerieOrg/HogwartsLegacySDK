#pragma once
#include <cstdint>
namespace ELeftArmPriority {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowestPriority = 1,
    UpperBodyIdle = 2,
    UpperBodyFlourish = 3,
    FullBodyUsage = 4,
    UpperBodyUsage = 5,
    Cinematic = 6,
    HighestPriority = 7,
    ELeftArmPriority_MAX = 8,
};
#pragma pack(pop)
}

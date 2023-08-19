#pragma once
#include <cstdint>
namespace ETeamAttitude {
#pragma pack(push, 1)
enum Type {
    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
    ETeamAttitude_MAX = 3,
};
#pragma pack(pop)
}

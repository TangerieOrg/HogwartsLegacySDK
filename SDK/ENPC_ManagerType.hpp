#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_ManagerType : uint8_t {
    None = 0,
    Enemy = 1,
    Student = 2,
    Companion = 3,
    Sidekick = 4,
    Dead = 5,
    Leader = 6,
    Duel = 7,
    AuthorityFig = 8,
    ENPC_MAX = 9,
};
#pragma pack(pop)

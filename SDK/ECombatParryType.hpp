#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECombatParryType : uint8_t {
    CPT_Parry = 0,
    CPT_Dodge = 1,
    CPT_MAX = 2,
};
#pragma pack(pop)

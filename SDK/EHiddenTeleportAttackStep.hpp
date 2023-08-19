#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHiddenTeleportAttackStep : uint8_t {
    ChooseAttackLocation = 0,
    Teleport = 1,
    Hide = 2,
    EHiddenTeleportAttackStep_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class NPC_GameChangerState : uint8_t {
    GameChanger_None = 0,
    GameChanger_ReplicaMaster = 1,
    GameChanger_Replicant = 2,
    GameChanger_Animagus_Character = 3,
    GameChanger_Animagus_Loading = 4,
    GameChanger_Animagus_Creature = 5,
    GameChanger_Animagus_Unloading = 6,
    GameChanger_Animagus_Form_Loading = 7,
    GameChanger_Animagus_Form = 8,
    GameChanger_Animagus_Form_Unloading = 9,
    GameChanger_Summoned_Form = 10,
    GameChanger_SummoningDead = 11,
    GameChanger_MAX = 12,
};
#pragma pack(pop)

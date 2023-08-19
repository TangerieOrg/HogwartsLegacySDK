#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvaAudioDialogueConditionFailedLineHandling : uint8_t {
    CFH_Suppress_Display = 0,
    CFH_Show_Disabled_Unknown_Reason = 1,
    CFH_Show_Disabled_Not_Enough_Money = 2,
    CFH_Show_Disabled_Social_Capital_Too_Low = 3,
    CFH_Show_Disabled_Faction_Capital_Too_Low = 4,
    CFH_Show_Disabled_Knowledge_Too_Low = 5,
    CFH_Show_Disabled_Curriculum_Level_Too_Low = 6,
    CFH_Show_Disabled_Missing_Inventory = 7,
    CFH_Show_Disabled_Not_Equipped = 8,
    CFH_Show_Disabled_SanctElf_Task_Cooldown = 9,
    CFH_MAX = 10,
};
#pragma pack(pop)

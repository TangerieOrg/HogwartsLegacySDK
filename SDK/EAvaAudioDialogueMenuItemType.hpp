#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAvaAudioDialogueMenuItemType : uint8_t {
    MIT_None = 0,
    MIT_Info = 1,
    MIT_InfoHub = 2,
    MIT_StraightPath = 3,
    MIT_Special = 4,
    MIT_BackTo = 5,
    MIT_Exit = 6,
    MIT_MainMission = 7,
    MIT_SideMission = 8,
    MIT_Assignment = 9,
    MIT_Conversation = 10,
    MIT_Vendor = 11,
    MIT_MAX = 12,
};
#pragma pack(pop)

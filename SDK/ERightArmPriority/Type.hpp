#pragma once
#include <cstdint>
namespace ERightArmPriority {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    LowestPriority = 1,
    UpperBodyIdle = 2,
    UpperBodyAlert = 3,
    UpperBodyAnticipation = 4,
    ChannelSpell = 5,
    UpperBodyFlourish = 6,
    FullBodyUnderLumos = 7,
    Lumos = 8,
    FullBodyUsage = 9,
    UpperBodyUsage = 10,
    WandCastFail = 11,
    FullBodyAbleAbility = 12,
    UpperBodyAbleAbility = 13,
    Cinematic = 14,
    HighestPriority = 15,
    ERightArmPriority_MAX = 16,
};
#pragma pack(pop)
}

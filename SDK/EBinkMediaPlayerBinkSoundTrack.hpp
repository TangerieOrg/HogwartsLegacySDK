#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBinkMediaPlayerBinkSoundTrack : uint8_t {
    BMASM_Bink_Sound_None = 0,
    BMASM_Bink_Sound_Simple = 1,
    BMASM_Bink_Sound_LanguageOverride = 2,
    BMASM_Bink_Sound_51 = 3,
    BMASM_Bink_Sound_51LanguageOverride = 4,
    BMASM_Bink_Sound_71 = 5,
    BMASM_Bink_Sound_71LanguageOverride = 6,
    BMASM_Bink_Sound_MAX = 7,
};
#pragma pack(pop)

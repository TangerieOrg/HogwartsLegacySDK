#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBinkMoviePlayerBinkSoundTrack : uint8_t {
    MP_Bink_Sound_None = 0,
    MP_Bink_Sound_Simple = 1,
    MP_Bink_Sound_LanguageOverride = 2,
    MP_Bink_Sound_51 = 3,
    MP_Bink_Sound_51LanguageOverride = 4,
    MP_Bink_Sound_71 = 5,
    MP_Bink_Sound_71LanguageOverride = 6,
    MP_Bink_Sound_MAX = 7,
};
#pragma pack(pop)

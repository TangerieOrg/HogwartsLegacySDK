#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialExposedTextureProperty : uint8_t {
    TMTM_TextureSize = 0,
    TMTM_TexelSize = 1,
    TMTM_MAX = 2,
};
#pragma pack(pop)

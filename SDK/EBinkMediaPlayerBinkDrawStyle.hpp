#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBinkMediaPlayerBinkDrawStyle : uint8_t {
    BMASM_Bink_DS_RenderToTexture = 0,
    BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 1,
    BMASM_Bink_DS_OverlayOriginalMovieSize = 2,
    BMASM_Bink_DS_OverlayFillScreen = 3,
    BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
    BMASM_Bink_DS_MAX = 5,
};
#pragma pack(pop)

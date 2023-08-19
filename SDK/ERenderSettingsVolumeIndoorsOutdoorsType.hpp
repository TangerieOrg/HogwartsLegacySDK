#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsVolumeIndoorsOutdoorsType : uint8_t {
    IndoorsAndOutdoors = 0,
    OutdoorsOnly = 1,
    IndoorsOnly = 2,
    ERenderSettingsVolumeIndoorsOutdoorsType_MAX = 3,
};
#pragma pack(pop)

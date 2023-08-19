#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsIndoorsType : uint8_t {
    Indoors = 0,
    SmoothedIndoors = 1,
    ProbeIndoors = 2,
    SmoothedProbeIndoors = 3,
    StreamingIndoors = 4,
    ERenderSettingsIndoorsType_MAX = 5,
};
#pragma pack(pop)

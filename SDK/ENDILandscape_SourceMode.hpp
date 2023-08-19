#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENDILandscape_SourceMode : uint8_t {
    Default = 0,
    Source = 1,
    AttachParent = 2,
    ENDILandscape_MAX = 3,
};
#pragma pack(pop)

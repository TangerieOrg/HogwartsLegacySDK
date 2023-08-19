#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHoudiniRuntimeSettingsAxisImport : uint8_t {
    HRSAI_Unreal = 0,
    HRSAI_Houdini = 1,
    HRSAI_MAX = 2,
};
#pragma pack(pop)

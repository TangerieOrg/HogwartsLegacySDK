#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EHoudiniRuntimeSettingsSessionType : uint8_t {
    HRSST_InProcess = 0,
    HRSST_Socket = 1,
    HRSST_NamedPipe = 2,
    HRSST_MAX = 3,
};
#pragma pack(pop)

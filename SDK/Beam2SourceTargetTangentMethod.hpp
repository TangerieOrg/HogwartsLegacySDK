#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum Beam2SourceTargetTangentMethod : uint8_t {
    PEB2STTM_Direct = 0,
    PEB2STTM_UserSet = 1,
    PEB2STTM_Distribution = 2,
    PEB2STTM_Emitter = 3,
    PEB2STTM_MAX = 4,
};
#pragma pack(pop)

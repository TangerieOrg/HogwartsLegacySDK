#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum BeamModifierType : uint8_t {
    PEB2MT_Source = 0,
    PEB2MT_Target = 1,
    PEB2MT_MAX = 2,
};
#pragma pack(pop)

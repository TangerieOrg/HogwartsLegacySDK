#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ENormalMode {
    NM_PreserveSmoothingGroups = 0,
    NM_RecalculateNormals = 1,
    NM_RecalculateNormalsSmooth = 2,
    NM_RecalculateNormalsHard = 3,
    TEMP_BROKEN = 4,
    ENormalMode_MAX = 5,
};
#pragma pack(pop)

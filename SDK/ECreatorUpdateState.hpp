#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatorUpdateState {
    UpdateSuccess = 0,
    UpdateFail = 1,
    UpdateCurrent = 2,
    UpdateDBFail = 3,
    ECreatorUpdateState_MAX = 4,
};
#pragma pack(pop)

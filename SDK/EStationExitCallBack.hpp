#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStationExitCallBack : uint8_t {
    InteractionCompleteCallback = 0,
    StartApparateCallback = 1,
    DestructionCallback = 2,
    DoNothingCallback = 3,
    DoNothingCallbackAndClear = 4,
    EStationExitCallBack_MAX = 5,
};
#pragma pack(pop)

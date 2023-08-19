#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMovieSceneEventPtrs.hpp"
#pragma pack(push, 1)
struct FMovieSceneEventTriggerData {
    FMovieSceneEventPtrs Ptrs; // 0x0
    FGuid ObjectBindingID; // 0x28
    char pad_38[0x10];
}; // Size: 0x48
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FMovieSceneEventParameters.hpp"
#pragma pack(push, 1)
struct FEventPayload {
    FName EventName; // 0x0
    FMovieSceneEventParameters Parameters; // 0x8
}; // Size: 0x30
#pragma pack(pop)

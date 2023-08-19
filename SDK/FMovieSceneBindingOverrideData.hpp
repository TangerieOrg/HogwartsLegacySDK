#pragma once
#include <cstdint>
#include "FMovieSceneObjectBindingID.hpp"
#pragma pack(push, 1)
struct FMovieSceneBindingOverrideData {
    FMovieSceneObjectBindingID ObjectBindingID; // 0x0
    char pad_18[0x8];
    bool bOverridesDefault; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)

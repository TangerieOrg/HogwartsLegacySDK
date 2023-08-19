#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FMovieSceneObjectBindingID {
    FGuid Guid; // 0x0
    int32_t SequenceID; // 0x10
    int32_t ResolveParentIndex; // 0x14
}; // Size: 0x18
#pragma pack(pop)

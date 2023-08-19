#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UMovieSceneSequence;
#pragma pack(push, 1)
struct FSequencerBindingProxy {
    FGuid BindingID; // 0x0
    UMovieSceneSequence* Sequence; // 0x10
}; // Size: 0x18
#pragma pack(pop)

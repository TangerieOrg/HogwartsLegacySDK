#pragma once
#include <cstdint>
#include "FMovieSceneEvent.hpp"
#include "UMovieSceneEventSectionBase.hpp"
#pragma pack(push, 1)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {
public:
    char pad_e8[0x8];
    FMovieSceneEvent Event; // 0xf0
    static UMovieSceneEventRepeaterSection* StaticClass();
}; // Size: 0x118
#pragma pack(pop)

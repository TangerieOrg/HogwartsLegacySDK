#pragma once
#include <cstdint>
#include "FMovieSceneEventSectionData.hpp"
#include "FNameCurve.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneEventSection : public UMovieSceneSection {
public:
    FNameCurve Events; // 0xe8
    FMovieSceneEventSectionData EventData; // 0x160
    static UMovieSceneEventSection* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)

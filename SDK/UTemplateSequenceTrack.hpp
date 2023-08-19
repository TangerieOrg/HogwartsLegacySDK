#pragma once
#include <cstdint>
#include "UMovieSceneSubTrack.hpp"
#pragma pack(push, 1)
class UTemplateSequenceTrack : public UMovieSceneSubTrack {
public:
    static UTemplateSequenceTrack* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

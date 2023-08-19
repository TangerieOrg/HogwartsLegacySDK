#pragma once
#include <cstdint>
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneEventSectionBase : public UMovieSceneSection {
public:
    static UMovieSceneEventSectionBase* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)

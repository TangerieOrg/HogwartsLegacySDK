#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
class UEnum;
#pragma pack(push, 1)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack {
public:
    UEnum* Enum; // 0xc0
    static UMovieSceneByteTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack {
public:
    bool bIsSlateColor; // 0xc0
    char pad_c1[0x7];
    static UMovieSceneColorTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)

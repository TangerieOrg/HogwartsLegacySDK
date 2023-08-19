#pragma once
#include <cstdint>
#include "UMovieSceneAkTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack {
public:
    char pad_a8[0x8];
    static UMovieSceneAkAudioEventTrack* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)

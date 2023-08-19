#pragma once
#include <cstdint>
#include "UMovieSceneTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneAkTrack : public UMovieSceneTrack {
public:
    TArray<UMovieSceneSection*> Sections; // 0x90
    uint8_t bIsAMasterTrack : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x7];
    static UMovieSceneAkTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

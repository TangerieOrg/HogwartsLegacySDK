#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneVectorSection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    FMovieSceneFloatChannel Curves[4]; // 0xf0
    int32_t ChannelsUsed; // 0x370
    char pad_374[0x4];
    static UMovieSceneVectorSection* StaticClass();
}; // Size: 0x378
#pragma pack(pop)

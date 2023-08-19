#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
#pragma pack(push, 1)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {
public:
    int32_t NumChannelsUsed; // 0xc0
    char pad_c4[0x4];
    static UMovieSceneVectorTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)

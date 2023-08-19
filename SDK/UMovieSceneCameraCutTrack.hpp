#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {
public:
    bool bCanBlend; // 0x90
    char pad_91[0x7];
    TArray<UMovieSceneSection*> Sections; // 0x98
    static UMovieSceneCameraCutTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

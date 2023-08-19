#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class USceneRigCameraTrack : public UMovieSceneNameableTrack {
public:
    TArray<UMovieSceneSection*> Sections; // 0x90
    static USceneRigCameraTrack* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

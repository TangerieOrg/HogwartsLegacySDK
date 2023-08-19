#pragma once
#include <cstdint>
#include "UMovieSceneNameableTrack.hpp"
class UControlRig;
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x10];
    UControlRig* ControlRig; // 0xa0
    UMovieSceneSection* SectionToKey; // 0xa8
    TArray<UMovieSceneSection*> Sections; // 0xb0
    FName TrackName; // 0xc0
    static UMovieSceneControlRigParameterTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)

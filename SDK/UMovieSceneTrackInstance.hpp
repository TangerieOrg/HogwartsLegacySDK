#pragma once
#include <cstdint>
#include "FMovieSceneTrackInstanceInput.hpp"
#include "UObject.hpp"
class UMovieSceneEntitySystemLinker;
#pragma pack(push, 1)
class UMovieSceneTrackInstance : public UObject {
public:
    UObject* AnimatedObject; // 0x28
    bool bIsMasterTrackInstance; // 0x30
    char pad_31[0x7];
    UMovieSceneEntitySystemLinker* Linker; // 0x38
    TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
    static UMovieSceneTrackInstance* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

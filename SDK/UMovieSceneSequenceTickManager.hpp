#pragma once
#include <cstdint>
#include "FMovieSceneSequenceActorPointers.hpp"
#include "UObject.hpp"
class UMovieSceneEntitySystemLinker;
#pragma pack(push, 1)
class UMovieSceneSequenceTickManager : public UObject {
public:
    TArray<FMovieSceneSequenceActorPointers> SequenceActors; // 0x28
    UMovieSceneEntitySystemLinker* Linker; // 0x38
    char pad_40[0x90];
    static UMovieSceneSequenceTickManager* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)

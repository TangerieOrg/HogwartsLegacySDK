#pragma once
#include <cstdint>
#include "FActorSequenceObjectReferenceMap.hpp"
#include "UMovieSceneSequence.hpp"
class UMovieScene;
#pragma pack(push, 1)
class UActorSequence : public UMovieSceneSequence {
public:
    UMovieScene* MovieScene; // 0x60
    FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
    static UActorSequence* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FMovieSceneObjectBindingID.hpp"
#include "UObject.hpp"
class ULevelSequencePlayer;
class UMovieSceneSequence;
class AActor;
#pragma pack(push, 1)
class ULevelSequenceDirector : public UObject {
public:
    ULevelSequencePlayer* Player; // 0x28
    int32_t SubSequenceID; // 0x30
    int32_t MovieScenePlayerIndex; // 0x34
    static ULevelSequenceDirector* StaticClass();
    void OnCreated();
    UMovieSceneSequence* GetSequence();
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);
    TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);
    AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);
}; // Size: 0x38
#pragma pack(pop)

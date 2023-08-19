#pragma once
#include <cstdint>
#include "EMovieSceneCompletionMode.hpp"
#include "EMovieSceneSequenceFlags.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UMovieSceneSignedObject.hpp"
class UMovieSceneCompiledData;
#pragma pack(push, 1)
class UMovieSceneSequence : public UMovieSceneSignedObject {
public:
    UMovieSceneCompiledData* CompiledData; // 0x50
    EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
    bool bParentContextsAreSignificant; // 0x59
    bool bPlayableDirectly; // 0x5a
    EMovieSceneSequenceFlags SequenceFlags; // 0x5b
    char pad_5c[0x4];
    static UMovieSceneSequence* StaticClass();
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
}; // Size: 0x60
#pragma pack(pop)

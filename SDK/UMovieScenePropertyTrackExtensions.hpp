#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UMovieScenePropertyTrack;
class UMovieSceneObjectPropertyTrack;
class UClass;
#pragma pack(push, 1)
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieScenePropertyTrackExtensions* StaticClass();
    static void SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath);
    static void SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass);
    static FName GetUniqueTrackName(UMovieScenePropertyTrack* Track);
    static FString GetPropertyPath(UMovieScenePropertyTrack* Track);
    static FName GetPropertyName(UMovieScenePropertyTrack* Track);
    static UClass* GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track);
}; // Size: 0x28
#pragma pack(pop)

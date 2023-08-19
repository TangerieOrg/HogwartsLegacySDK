#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UMovieSceneVectorTrack;
#pragma pack(push, 1)
class UMovieSceneVectorTrackExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneVectorTrackExtensions* StaticClass();
    static void SetNumChannelsUsed(UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed);
    static int32_t GetNumChannelsUsed(UMovieSceneVectorTrack* Track);
}; // Size: 0x28
#pragma pack(pop)

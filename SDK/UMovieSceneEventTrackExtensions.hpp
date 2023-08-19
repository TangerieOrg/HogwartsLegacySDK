#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UMovieSceneEventTrack;
class UMovieSceneEventTriggerSection;
class UMovieSceneEventRepeaterSection;
#pragma pack(push, 1)
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary {
public:
    static UMovieSceneEventTrackExtensions* StaticClass();
    static UMovieSceneEventTriggerSection* AddEventTriggerSection(UMovieSceneEventTrack* InTrack);
    static UMovieSceneEventRepeaterSection* AddEventRepeaterSection(UMovieSceneEventTrack* InTrack);
}; // Size: 0x28
#pragma pack(pop)

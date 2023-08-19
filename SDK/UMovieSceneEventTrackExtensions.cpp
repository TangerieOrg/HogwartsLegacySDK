#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMovieSceneEventRepeaterSection.hpp"
#include "UMovieSceneEventTrack.hpp"
#include "UMovieSceneEventTrackExtensions.hpp"
#include "UMovieSceneEventTriggerSection.hpp"
UMovieSceneEventTrackExtensions* UMovieSceneEventTrackExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneEventTrackExtensions");
    return (UMovieSceneEventTrackExtensions*)res;
}
UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::AddEventRepeaterSection(UMovieSceneEventTrack* InTrack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection"));
    struct Params_AddEventRepeaterSection {
        UMovieSceneEventTrack* InTrack; // 0x0
        UMovieSceneEventRepeaterSection* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddEventRepeaterSection params{};
    params.InTrack = (UMovieSceneEventTrack*)InTrack;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneEventRepeaterSection*)params.ReturnValue;
}
UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::AddEventTriggerSection(UMovieSceneEventTrack* InTrack) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection"));
    struct Params_AddEventTriggerSection {
        UMovieSceneEventTrack* InTrack; // 0x0
        UMovieSceneEventTriggerSection* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddEventTriggerSection params{};
    params.InTrack = (UMovieSceneEventTrack*)InTrack;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneEventTriggerSection*)params.ReturnValue;
}

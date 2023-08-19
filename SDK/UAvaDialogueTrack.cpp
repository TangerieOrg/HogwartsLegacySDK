#include "FMovieSceneObjectBindingID.hpp"
#include "UAvaDialogueTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UAvaDialogueTrack* UAvaDialogueTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaDialogueTrack");
    return (UAvaDialogueTrack*)res;
}

#include "FAvaDialogueTrackSectionData.hpp"
#include "UAvaDialogueTrackSection.hpp"
#include "UMovieSceneSection.hpp"
UAvaDialogueTrackSection* UAvaDialogueTrackSection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaDialogueTrackSection");
    return (UAvaDialogueTrackSection*)res;
}

#include "UMovieSceneSubTrack.hpp"
#include "UTemplateSequenceTrack.hpp"
UTemplateSequenceTrack* UTemplateSequenceTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequenceTrack");
    return (UTemplateSequenceTrack*)res;
}

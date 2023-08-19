#include "EAttachmentRule.hpp"
#include "EDetachmentRule.hpp"
#include "UMovieScene3DAttachSection.hpp"
#include "UMovieScene3DConstraintSection.hpp"
UMovieScene3DAttachSection* UMovieScene3DAttachSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DAttachSection");
    return (UMovieScene3DAttachSection*)res;
}

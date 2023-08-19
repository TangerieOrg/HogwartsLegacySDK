#include "FMovieSceneSkeletalAnimRootMotionTrackParams.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSkeletalAnimationTrack.hpp"
UMovieSceneSkeletalAnimationTrack* UMovieSceneSkeletalAnimationTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
    return (UMovieSceneSkeletalAnimationTrack*)res;
}

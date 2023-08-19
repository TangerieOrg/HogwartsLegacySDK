#include "UInterface.hpp"
#include "UMovieSceneTrackTemplateProducer.hpp"
UMovieSceneTrackTemplateProducer* UMovieSceneTrackTemplateProducer::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneTrackTemplateProducer");
    return (UMovieSceneTrackTemplateProducer*)res;
}

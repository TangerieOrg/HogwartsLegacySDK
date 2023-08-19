#include "UFloatChannelEvaluatorSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UFloatChannelEvaluatorSystem* UFloatChannelEvaluatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.FloatChannelEvaluatorSystem");
    return (UFloatChannelEvaluatorSystem*)res;
}

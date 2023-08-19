#include "UIntegerChannelEvaluatorSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UIntegerChannelEvaluatorSystem* UIntegerChannelEvaluatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.IntegerChannelEvaluatorSystem");
    return (UIntegerChannelEvaluatorSystem*)res;
}

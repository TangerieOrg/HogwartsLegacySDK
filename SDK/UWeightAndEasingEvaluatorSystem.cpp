#include "UMovieSceneEntitySystem.hpp"
#include "UWeightAndEasingEvaluatorSystem.hpp"
UWeightAndEasingEvaluatorSystem* UWeightAndEasingEvaluatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem");
    return (UWeightAndEasingEvaluatorSystem*)res;
}

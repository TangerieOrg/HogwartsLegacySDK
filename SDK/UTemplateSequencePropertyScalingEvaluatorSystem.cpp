#include "UMovieSceneEntitySystem.hpp"
#include "UTemplateSequencePropertyScalingEvaluatorSystem.hpp"
UTemplateSequencePropertyScalingEvaluatorSystem* UTemplateSequencePropertyScalingEvaluatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem");
    return (UTemplateSequencePropertyScalingEvaluatorSystem*)res;
}

#include "UMovieSceneEntitySystem.hpp"
#include "UTemplateSequencePropertyScalingInstantiatorSystem.hpp"
UTemplateSequencePropertyScalingInstantiatorSystem* UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem");
    return (UTemplateSequencePropertyScalingInstantiatorSystem*)res;
}

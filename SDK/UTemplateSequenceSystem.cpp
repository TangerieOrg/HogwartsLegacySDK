#include "UMovieSceneEntitySystem.hpp"
#include "UTemplateSequenceSystem.hpp"
UTemplateSequenceSystem* UTemplateSequenceSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequenceSystem");
    return (UTemplateSequenceSystem*)res;
}

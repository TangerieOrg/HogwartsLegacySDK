#include "FTemplateSectionPropertyScale.hpp"
#include "UMovieSceneSubSection.hpp"
#include "UTemplateSequenceSection.hpp"
UTemplateSequenceSection* UTemplateSequenceSection::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequenceSection");
    return (UTemplateSequenceSection*)res;
}

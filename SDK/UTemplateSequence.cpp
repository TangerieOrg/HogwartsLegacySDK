#include "UMovieScene.hpp"
#include "UMovieSceneSequence.hpp"
#include "UTemplateSequence.hpp"
UTemplateSequence* UTemplateSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequence");
    return (UTemplateSequence*)res;
}

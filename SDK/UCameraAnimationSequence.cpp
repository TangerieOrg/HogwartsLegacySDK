#include "UCameraAnimationSequence.hpp"
#include "UTemplateSequence.hpp"
UCameraAnimationSequence* UCameraAnimationSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.CameraAnimationSequence");
    return (UCameraAnimationSequence*)res;
}

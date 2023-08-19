#include "UCameraAnimationSequence.hpp"
#include "UCameraShakePattern.hpp"
#include "USequenceCameraShakeCameraStandIn.hpp"
#include "USequenceCameraShakePattern.hpp"
#include "USequenceCameraShakeSequencePlayer.hpp"
USequenceCameraShakePattern* USequenceCameraShakePattern::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.SequenceCameraShakePattern");
    return (USequenceCameraShakePattern*)res;
}

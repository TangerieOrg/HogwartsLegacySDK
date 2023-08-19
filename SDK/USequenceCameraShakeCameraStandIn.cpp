#include "FCameraFilmbackSettings.hpp"
#include "FCameraFocusSettings.hpp"
#include "FCameraLensSettings.hpp"
#include "FPostProcessSettings.hpp"
#include "UObject.hpp"
#include "USequenceCameraShakeCameraStandIn.hpp"
USequenceCameraShakeCameraStandIn* USequenceCameraShakeCameraStandIn::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn");
    return (USequenceCameraShakeCameraStandIn*)res;
}

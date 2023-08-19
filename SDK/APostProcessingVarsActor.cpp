#include "AActor.hpp"
#include "APostProcessingVarsActor.hpp"
#include "UPostProcessingVarsComponent.hpp"
APostProcessingVarsActor* APostProcessingVarsActor::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsActor");
    return (APostProcessingVarsActor*)res;
}

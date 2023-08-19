#include "FPostProcessSettings.hpp"
#include "UMultiFX2PostProcessComponent.hpp"
#include "UMultiFX2_PostProcessingDefinition.hpp"
#include "USceneComponent.hpp"
UMultiFX2PostProcessComponent* UMultiFX2PostProcessComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2PostProcessComponent");
    return (UMultiFX2PostProcessComponent*)res;
}

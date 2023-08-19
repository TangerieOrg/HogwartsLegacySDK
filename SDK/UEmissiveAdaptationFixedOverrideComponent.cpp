#include "FPostProcessSettings.hpp"
#include "UEmissiveAdaptationFixedOverrideComponent.hpp"
#include "UEmissiveAdaptationOverrideComponent.hpp"
UEmissiveAdaptationFixedOverrideComponent* UEmissiveAdaptationFixedOverrideComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EmissiveAdaptationFixedOverrideComponent");
    return (UEmissiveAdaptationFixedOverrideComponent*)res;
}

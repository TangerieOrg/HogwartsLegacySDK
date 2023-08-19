#include "FSkyAtmosphereSkyOnlyParameters.hpp"
#include "UMaterialInterface.hpp"
#include "USkyOnlyComponent.hpp"
#include "UStaticMeshComponent.hpp"
USkyOnlyComponent* USkyOnlyComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyOnlyComponent");
    return (USkyOnlyComponent*)res;
}

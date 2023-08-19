#include "ASanctuaryLightingIdentityVolume.hpp"
#include "AVolume.hpp"
#include "UBlendableGlobalLightingComponent.hpp"
#include "UBoxComponent.hpp"
#include "UPostProcessComponent.hpp"
#include "URenderSettingsComponent.hpp"
ASanctuaryLightingIdentityVolume* ASanctuaryLightingIdentityVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryLightingIdentityVolume");
    return (ASanctuaryLightingIdentityVolume*)res;
}

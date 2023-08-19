#include "AActor.hpp"
#include "ASanctuaryLightingIdentityMaster.hpp"
#include "USanctuaryLightingIdentityMasterComponent.hpp"
ASanctuaryLightingIdentityMaster* ASanctuaryLightingIdentityMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryLightingIdentityMaster");
    return (ASanctuaryLightingIdentityMaster*)res;
}

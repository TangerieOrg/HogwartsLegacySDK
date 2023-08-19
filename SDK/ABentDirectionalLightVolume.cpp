#include "AActor.hpp"
#include "ABentDirectionalLightVolume.hpp"
#include "FBentDirectionalLightParams.hpp"
#include "FBlendDomain.hpp"
#include "UBoxComponent.hpp"
#include "UGlobalLightingBlendableBentDirectionalLight.hpp"
ABentDirectionalLightVolume* ABentDirectionalLightVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.BentDirectionalLightVolume");
    return (ABentDirectionalLightVolume*)res;
}

#include "AAmbientOcclusionVolume.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableGTAOFromAOVolume.hpp"
UGlobalLightingBlendableGTAOFromAOVolume* UGlobalLightingBlendableGTAOFromAOVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableGTAOFromAOVolume");
    return (UGlobalLightingBlendableGTAOFromAOVolume*)res;
}

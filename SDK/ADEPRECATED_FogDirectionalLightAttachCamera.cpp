#include "ADEPRECATED_FogDirectionalLight.hpp"
#include "ADEPRECATED_FogDirectionalLightAttachCamera.hpp"
ADEPRECATED_FogDirectionalLightAttachCamera* ADEPRECATED_FogDirectionalLightAttachCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.FogDirectionalLightAttachCamera");
    return (ADEPRECATED_FogDirectionalLightAttachCamera*)res;
}

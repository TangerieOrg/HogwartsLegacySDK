#include "ADEPRECATED_FogDirectionalLight.hpp"
#include "ADEPRECATED_FogDirectionalLightFollowCamera.hpp"
ADEPRECATED_FogDirectionalLightFollowCamera* ADEPRECATED_FogDirectionalLightFollowCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.FogDirectionalLightFollowCamera");
    return (ADEPRECATED_FogDirectionalLightFollowCamera*)res;
}

#include "ADEPRECATED_FogDirectionalLight.hpp"
#include "ADEPRECATED_FogDirectionalLightOpposeCamera.hpp"
ADEPRECATED_FogDirectionalLightOpposeCamera* ADEPRECATED_FogDirectionalLightOpposeCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.FogDirectionalLightOpposeCamera");
    return (ADEPRECATED_FogDirectionalLightOpposeCamera*)res;
}

#include "ADEPRECATED_FogDirectionalLight.hpp"
#include "ALight.hpp"
ADEPRECATED_FogDirectionalLight* ADEPRECATED_FogDirectionalLight::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.FogDirectionalLight");
    return (ADEPRECATED_FogDirectionalLight*)res;
}

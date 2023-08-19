#include "URenderSettingsNamedCustomBlendDomain.hpp"
#include "UWeatherCustomBlendDomainWeatherCameraParticlesSpawnRate.hpp"
UWeatherCustomBlendDomainWeatherCameraParticlesSpawnRate* UWeatherCustomBlendDomainWeatherCameraParticlesSpawnRate::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherCustomBlendDomainWeatherCameraParticlesSpawnRate");
    return (UWeatherCustomBlendDomainWeatherCameraParticlesSpawnRate*)res;
}

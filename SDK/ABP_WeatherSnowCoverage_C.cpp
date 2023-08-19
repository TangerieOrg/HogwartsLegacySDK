#include "ABP_WeatherSnowCoverage_C.hpp"
#include "AWeatherCoverageBlueprint.hpp"
#include "UNiagaraComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_WeatherSnowCoverage_C* ABP_WeatherSnowCoverage_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Weather/Snow/BP_WeatherSnowCoverage.BP_WeatherSnowCoverage_C");
    return (ABP_WeatherSnowCoverage_C*)res;
}

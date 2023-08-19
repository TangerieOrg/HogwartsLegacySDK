#include "ABP_WeatherRainCoverage_C.hpp"
#include "AWeatherCoverageBlueprint.hpp"
#include "UNiagaraComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_WeatherRainCoverage_C* ABP_WeatherRainCoverage_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Weather/Rain/BP_WeatherRainCoverage.BP_WeatherRainCoverage_C");
    return (ABP_WeatherRainCoverage_C*)res;
}

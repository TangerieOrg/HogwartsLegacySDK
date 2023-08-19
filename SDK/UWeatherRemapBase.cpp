#include "UObject.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "UWeatherRemapBase.hpp"
UWeatherRemapBase* UWeatherRemapBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WeatherRemapBase");
    return (UWeatherRemapBase*)res;
}

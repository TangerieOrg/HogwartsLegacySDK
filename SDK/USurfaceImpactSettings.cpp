#include "UObject.hpp"
#include "USurfaceImpactSettings.hpp"
USurfaceImpactSettings* USurfaceImpactSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SurfaceImpactSettings");
    return (USurfaceImpactSettings*)res;
}

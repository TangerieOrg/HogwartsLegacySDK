#include "UMapLightProbeStreamData.hpp"
#include "UObject.hpp"
UMapLightProbeStreamData* UMapLightProbeStreamData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MapLightProbeStreamData");
    return (UMapLightProbeStreamData*)res;
}

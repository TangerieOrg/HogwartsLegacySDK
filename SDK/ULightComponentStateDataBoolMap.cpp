#include "ULightComponentStateData.hpp"
#include "ULightComponentStateDataBoolMap.hpp"
ULightComponentStateDataBoolMap* ULightComponentStateDataBoolMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateDataBoolMap");
    return (ULightComponentStateDataBoolMap*)res;
}

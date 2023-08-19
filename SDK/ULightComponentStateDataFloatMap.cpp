#include "ULightComponentStateData.hpp"
#include "ULightComponentStateDataFloatMap.hpp"
ULightComponentStateDataFloatMap* ULightComponentStateDataFloatMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateDataFloatMap");
    return (ULightComponentStateDataFloatMap*)res;
}

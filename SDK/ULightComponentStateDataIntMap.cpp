#include "ULightComponentStateData.hpp"
#include "ULightComponentStateDataIntMap.hpp"
ULightComponentStateDataIntMap* ULightComponentStateDataIntMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateDataIntMap");
    return (ULightComponentStateDataIntMap*)res;
}

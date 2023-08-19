#include "ULightComponentState.hpp"
#include "ULightComponentStateIntMap.hpp"
ULightComponentStateIntMap* ULightComponentStateIntMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateIntMap");
    return (ULightComponentStateIntMap*)res;
}

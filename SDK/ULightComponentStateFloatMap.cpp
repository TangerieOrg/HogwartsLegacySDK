#include "ULightComponentState.hpp"
#include "ULightComponentStateFloatMap.hpp"
ULightComponentStateFloatMap* ULightComponentStateFloatMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateFloatMap");
    return (ULightComponentStateFloatMap*)res;
}

#include "ULightComponentState.hpp"
#include "ULightComponentStateBoolMap.hpp"
ULightComponentStateBoolMap* ULightComponentStateBoolMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateBoolMap");
    return (ULightComponentStateBoolMap*)res;
}

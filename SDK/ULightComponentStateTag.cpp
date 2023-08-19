#include "ULightComponentStateBoolMap.hpp"
#include "ULightComponentStateTag.hpp"
ULightComponentStateTag* ULightComponentStateTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateTag");
    return (ULightComponentStateTag*)res;
}

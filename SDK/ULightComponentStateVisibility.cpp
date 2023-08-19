#include "ULightComponentStateBoolMap.hpp"
#include "ULightComponentStateVisibility.hpp"
ULightComponentStateVisibility* ULightComponentStateVisibility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateVisibility");
    return (ULightComponentStateVisibility*)res;
}

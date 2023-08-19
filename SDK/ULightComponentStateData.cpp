#include "ULightComponentState.hpp"
#include "ULightComponentStateData.hpp"
#include "UObject.hpp"
ULightComponentStateData* ULightComponentStateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateData");
    return (ULightComponentStateData*)res;
}

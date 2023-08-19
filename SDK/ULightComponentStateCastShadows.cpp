#include "ULightComponentStateBoolMap.hpp"
#include "ULightComponentStateCastShadows.hpp"
ULightComponentStateCastShadows* ULightComponentStateCastShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateCastShadows");
    return (ULightComponentStateCastShadows*)res;
}

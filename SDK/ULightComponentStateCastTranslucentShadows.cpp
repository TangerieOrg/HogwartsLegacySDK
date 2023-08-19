#include "ULightComponentStateBoolMap.hpp"
#include "ULightComponentStateCastTranslucentShadows.hpp"
ULightComponentStateCastTranslucentShadows* ULightComponentStateCastTranslucentShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentStateCastTranslucentShadows");
    return (ULightComponentStateCastTranslucentShadows*)res;
}

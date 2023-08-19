#include "ULightComponentState.hpp"
#include "UObject.hpp"
ULightComponentState* ULightComponentState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LightComponentState");
    return (ULightComponentState*)res;
}

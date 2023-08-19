#include "ALight.hpp"
#include "ARectLight.hpp"
#include "URectLightComponent.hpp"
ARectLight* ARectLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RectLight");
    return (ARectLight*)res;
}

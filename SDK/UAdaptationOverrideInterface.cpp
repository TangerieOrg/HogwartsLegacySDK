#include "UAdaptationOverrideInterface.hpp"
#include "UInterface.hpp"
UAdaptationOverrideInterface* UAdaptationOverrideInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.AdaptationOverrideInterface");
    return (UAdaptationOverrideInterface*)res;
}

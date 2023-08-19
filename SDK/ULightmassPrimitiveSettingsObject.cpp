#include "FLightmassPrimitiveSettings.hpp"
#include "ULightmassPrimitiveSettingsObject.hpp"
#include "UObject.hpp"
ULightmassPrimitiveSettingsObject* ULightmassPrimitiveSettingsObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightmassPrimitiveSettingsObject");
    return (ULightmassPrimitiveSettingsObject*)res;
}

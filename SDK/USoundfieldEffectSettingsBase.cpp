#include "UObject.hpp"
#include "USoundfieldEffectSettingsBase.hpp"
USoundfieldEffectSettingsBase* USoundfieldEffectSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.SoundfieldEffectSettingsBase");
    return (USoundfieldEffectSettingsBase*)res;
}

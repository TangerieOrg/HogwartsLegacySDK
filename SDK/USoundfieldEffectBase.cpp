#include "UObject.hpp"
#include "USoundfieldEffectBase.hpp"
#include "USoundfieldEffectSettingsBase.hpp"
USoundfieldEffectBase* USoundfieldEffectBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.SoundfieldEffectBase");
    return (USoundfieldEffectBase*)res;
}

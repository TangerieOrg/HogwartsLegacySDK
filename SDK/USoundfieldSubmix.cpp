#include "UClass.hpp"
#include "USoundSubmixWithParentBase.hpp"
#include "USoundfieldEffectBase.hpp"
#include "USoundfieldEncodingSettingsBase.hpp"
#include "USoundfieldSubmix.hpp"
USoundfieldSubmix* USoundfieldSubmix::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundfieldSubmix");
    return (USoundfieldSubmix*)res;
}

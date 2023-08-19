#include "UClass.hpp"
#include "USoundSubmixBase.hpp"
#include "USoundfieldEffectBase.hpp"
#include "USoundfieldEncodingSettingsBase.hpp"
#include "USoundfieldEndpointSettingsBase.hpp"
#include "USoundfieldEndpointSubmix.hpp"
USoundfieldEndpointSubmix* USoundfieldEndpointSubmix::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundfieldEndpointSubmix");
    return (USoundfieldEndpointSubmix*)res;
}

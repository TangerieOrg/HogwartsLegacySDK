#include "FSoundAttenuationSettings.hpp"
#include "UObject.hpp"
#include "USoundAttenuation.hpp"
USoundAttenuation* USoundAttenuation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundAttenuation");
    return (USoundAttenuation*)res;
}

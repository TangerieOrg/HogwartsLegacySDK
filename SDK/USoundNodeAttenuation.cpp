#include "FSoundAttenuationSettings.hpp"
#include "USoundAttenuation.hpp"
#include "USoundNode.hpp"
#include "USoundNodeAttenuation.hpp"
USoundNodeAttenuation* USoundNodeAttenuation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeAttenuation");
    return (USoundNodeAttenuation*)res;
}

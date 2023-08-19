#include "FSoundAttenuationSettings.hpp"
#include "USoundBase.hpp"
#include "USoundCue.hpp"
#include "USoundNode.hpp"
USoundCue* USoundCue::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundCue");
    return (USoundCue*)res;
}

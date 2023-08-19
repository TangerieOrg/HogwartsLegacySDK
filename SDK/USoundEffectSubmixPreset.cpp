#include "USoundEffectPreset.hpp"
#include "USoundEffectSubmixPreset.hpp"
USoundEffectSubmixPreset* USoundEffectSubmixPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundEffectSubmixPreset");
    return (USoundEffectSubmixPreset*)res;
}

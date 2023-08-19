#include "UObject.hpp"
#include "USoundEffectPreset.hpp"
USoundEffectPreset* USoundEffectPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundEffectPreset");
    return (USoundEffectPreset*)res;
}

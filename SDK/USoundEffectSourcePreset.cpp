#include "USoundEffectPreset.hpp"
#include "USoundEffectSourcePreset.hpp"
USoundEffectSourcePreset* USoundEffectSourcePreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundEffectSourcePreset");
    return (USoundEffectSourcePreset*)res;
}

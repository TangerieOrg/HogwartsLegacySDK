#include "FSourceEffectChainEntry.hpp"
#include "UObject.hpp"
#include "USoundEffectSourcePresetChain.hpp"
USoundEffectSourcePresetChain* USoundEffectSourcePresetChain::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundEffectSourcePresetChain");
    return (USoundEffectSourcePresetChain*)res;
}

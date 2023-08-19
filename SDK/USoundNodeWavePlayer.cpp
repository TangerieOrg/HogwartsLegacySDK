#include "USoundNodeAssetReferencer.hpp"
#include "USoundNodeWavePlayer.hpp"
#include "USoundWave.hpp"
USoundNodeWavePlayer* USoundNodeWavePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeWavePlayer");
    return (USoundNodeWavePlayer*)res;
}

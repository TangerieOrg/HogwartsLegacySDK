#include "USoundWaveProcedural.hpp"
#include "USynthComponent.hpp"
#include "USynthSound.hpp"
USynthSound* USynthSound::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.SynthSound");
    return (USynthSound*)res;
}

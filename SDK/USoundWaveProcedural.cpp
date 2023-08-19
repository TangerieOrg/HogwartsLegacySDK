#include "USoundWave.hpp"
#include "USoundWaveProcedural.hpp"
USoundWaveProcedural* USoundWaveProcedural::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundWaveProcedural");
    return (USoundWaveProcedural*)res;
}

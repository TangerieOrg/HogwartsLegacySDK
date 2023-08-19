#include "ESourceBusChannels.hpp"
#include "UAudioBus.hpp"
#include "USoundSourceBus.hpp"
#include "USoundWave.hpp"
USoundSourceBus* USoundSourceBus::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundSourceBus");
    return (USoundSourceBus*)res;
}

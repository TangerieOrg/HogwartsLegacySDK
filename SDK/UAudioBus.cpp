#include "EAudioBusChannels.hpp"
#include "UAudioBus.hpp"
#include "UObject.hpp"
UAudioBus* UAudioBus::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AudioBus");
    return (UAudioBus*)res;
}

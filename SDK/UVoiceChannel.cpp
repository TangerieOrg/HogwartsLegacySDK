#include "UChannel.hpp"
#include "UVoiceChannel.hpp"
UVoiceChannel* UVoiceChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VoiceChannel");
    return (UVoiceChannel*)res;
}

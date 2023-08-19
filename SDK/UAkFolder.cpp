#include "UAkAudioType.hpp"
#include "UAkFolder.hpp"
UAkFolder* UAkFolder::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkFolder");
    return (UAkFolder*)res;
}

#include "UAkAcousticTexture.hpp"
#include "UAkAudioType.hpp"
UAkAcousticTexture* UAkAcousticTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAcousticTexture");
    return (UAkAcousticTexture*)res;
}

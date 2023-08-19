#include "UAkAudioInputComponent.hpp"
#include "UAkSubmixInputComponent.hpp"
#include "USoundSubmix.hpp"
UAkSubmixInputComponent* UAkSubmixInputComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSubmixInputComponent");
    return (UAkSubmixInputComponent*)res;
}

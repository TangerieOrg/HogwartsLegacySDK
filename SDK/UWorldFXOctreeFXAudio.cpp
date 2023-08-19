#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldFXAudioEventExtra.hpp"
#include "UAkAudioEvent.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXAudio.hpp"
UWorldFXOctreeFXAudio* UWorldFXOctreeFXAudio::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXAudio");
    return (UWorldFXOctreeFXAudio*)res;
}

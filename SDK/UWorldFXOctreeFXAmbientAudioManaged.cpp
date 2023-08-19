#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXAmbientAudioManaged.hpp"
UWorldFXOctreeFXAmbientAudioManaged* UWorldFXOctreeFXAmbientAudioManaged::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXAmbientAudioManaged");
    return (UWorldFXOctreeFXAmbientAudioManaged*)res;
}

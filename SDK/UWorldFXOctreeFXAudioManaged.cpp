#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXAudioManaged.hpp"
UWorldFXOctreeFXAudioManaged* UWorldFXOctreeFXAudioManaged::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXAudioManaged");
    return (UWorldFXOctreeFXAudioManaged*)res;
}

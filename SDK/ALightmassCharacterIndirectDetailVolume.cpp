#include "ALightmassCharacterIndirectDetailVolume.hpp"
#include "AVolume.hpp"
ALightmassCharacterIndirectDetailVolume* ALightmassCharacterIndirectDetailVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightmassCharacterIndirectDetailVolume");
    return (ALightmassCharacterIndirectDetailVolume*)res;
}

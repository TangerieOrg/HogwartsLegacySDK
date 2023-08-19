#include "ALightmassImportanceVolume.hpp"
#include "AVolume.hpp"
ALightmassImportanceVolume* ALightmassImportanceVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightmassImportanceVolume");
    return (ALightmassImportanceVolume*)res;
}

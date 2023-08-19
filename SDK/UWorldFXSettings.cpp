#include "FWorldFXPerWorldSettings.hpp"
#include "FWorldFXPresets.hpp"
#include "UDataAsset.hpp"
#include "UWorldFXSettings.hpp"
UWorldFXSettings* UWorldFXSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXSettings");
    return (UWorldFXSettings*)res;
}

#include "FLumosScalabilitySettings.hpp"
#include "UDataAsset.hpp"
#include "ULumosScalabilityAsset.hpp"
ULumosScalabilityAsset* ULumosScalabilityAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosScalabilityAsset");
    return (ULumosScalabilityAsset*)res;
}

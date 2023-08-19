#include "FPostProcessSettings.hpp"
#include "UDataAsset.hpp"
#include "ULumosPostProcessingAsset.hpp"
ULumosPostProcessingAsset* ULumosPostProcessingAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LumosPostProcessingAsset");
    return (ULumosPostProcessingAsset*)res;
}

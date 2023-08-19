#include "EObjectPropertyType.hpp"
#include "UAkAudioEvent.hpp"
#include "UDataAsset.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialPropertyData.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPhysicalMaterial.hpp"
UMaterialPropertyData* UMaterialPropertyData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MaterialPropertyData");
    return (UMaterialPropertyData*)res;
}

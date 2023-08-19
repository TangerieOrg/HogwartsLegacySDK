#include "UDataAsset.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "USpellInfoData.hpp"
USpellInfoData* USpellInfoData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellInfoData");
    return (USpellInfoData*)res;
}

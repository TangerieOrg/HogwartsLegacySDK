#include "FGameplayTagContainer.hpp"
#include "UDataAsset.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "USpellHelperData.hpp"
USpellHelperData* USpellHelperData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellHelperData");
    return (USpellHelperData*)res;
}

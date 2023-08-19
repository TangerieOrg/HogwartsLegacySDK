#include "EValueComparison.hpp"
#include "UModFilter_LootDrop_Base.hpp"
#include "UModFilter_LootDrop_RarityPercentageTarget.hpp"
UModFilter_LootDrop_RarityPercentageTarget* UModFilter_LootDrop_RarityPercentageTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_LootDrop_RarityPercentageTarget");
    return (UModFilter_LootDrop_RarityPercentageTarget*)res;
}

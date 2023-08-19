#include "FGameplayTag.hpp"
#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_HasTag.hpp"
UModFilter_DealDamage_HasTag* UModFilter_DealDamage_HasTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_HasTag");
    return (UModFilter_DealDamage_HasTag*)res;
}

#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_IsAOE.hpp"
UModFilter_DealDamage_IsAOE* UModFilter_DealDamage_IsAOE::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_IsAOE");
    return (UModFilter_DealDamage_IsAOE*)res;
}

#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_CompanionLastTarget.hpp"
UModFilter_DealDamage_Target_CompanionLastTarget* UModFilter_DealDamage_Target_CompanionLastTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_CompanionLastTarget");
    return (UModFilter_DealDamage_Target_CompanionLastTarget*)res;
}

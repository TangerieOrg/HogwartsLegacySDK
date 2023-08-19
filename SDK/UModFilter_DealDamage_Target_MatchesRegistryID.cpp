#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_MatchesRegistryID.hpp"
UModFilter_DealDamage_Target_MatchesRegistryID* UModFilter_DealDamage_Target_MatchesRegistryID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_MatchesRegistryID");
    return (UModFilter_DealDamage_Target_MatchesRegistryID*)res;
}

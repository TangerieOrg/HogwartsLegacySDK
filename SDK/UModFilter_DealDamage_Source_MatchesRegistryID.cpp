#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Source_MatchesRegistryID.hpp"
UModFilter_DealDamage_Source_MatchesRegistryID* UModFilter_DealDamage_Source_MatchesRegistryID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Source_MatchesRegistryID");
    return (UModFilter_DealDamage_Source_MatchesRegistryID*)res;
}

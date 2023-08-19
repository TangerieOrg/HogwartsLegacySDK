#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_MatchesSubTypeIDs.hpp"
UModFilter_DealDamage_Target_MatchesSubTypeIDs* UModFilter_DealDamage_Target_MatchesSubTypeIDs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_MatchesSubTypeIDs");
    return (UModFilter_DealDamage_Target_MatchesSubTypeIDs*)res;
}

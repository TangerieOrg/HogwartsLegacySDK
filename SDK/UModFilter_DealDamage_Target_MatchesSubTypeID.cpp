#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_MatchesSubTypeID.hpp"
UModFilter_DealDamage_Target_MatchesSubTypeID* UModFilter_DealDamage_Target_MatchesSubTypeID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_MatchesSubTypeID");
    return (UModFilter_DealDamage_Target_MatchesSubTypeID*)res;
}

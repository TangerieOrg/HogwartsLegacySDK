#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_MatchesSubTypeID.hpp"
UModFilter_ObjectState_MatchesSubTypeID* UModFilter_ObjectState_MatchesSubTypeID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_MatchesSubTypeID");
    return (UModFilter_ObjectState_MatchesSubTypeID*)res;
}

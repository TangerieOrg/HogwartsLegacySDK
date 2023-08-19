#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_MatchesRegistryID.hpp"
UModFilter_ObjectState_MatchesRegistryID* UModFilter_ObjectState_MatchesRegistryID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_MatchesRegistryID");
    return (UModFilter_ObjectState_MatchesRegistryID*)res;
}

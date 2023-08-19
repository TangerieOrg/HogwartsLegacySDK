#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_IsOnPlayerTeam.hpp"
UModFilter_ObjectState_IsOnPlayerTeam* UModFilter_ObjectState_IsOnPlayerTeam::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_IsOnPlayerTeam");
    return (UModFilter_ObjectState_IsOnPlayerTeam*)res;
}

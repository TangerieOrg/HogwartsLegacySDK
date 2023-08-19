#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_IsInfamous.hpp"
UModFilter_Player_IsInfamous* UModFilter_Player_IsInfamous::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_IsInfamous");
    return (UModFilter_Player_IsInfamous*)res;
}

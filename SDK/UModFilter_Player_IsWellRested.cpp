#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_IsWellRested.hpp"
UModFilter_Player_IsWellRested* UModFilter_Player_IsWellRested::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_IsWellRested");
    return (UModFilter_Player_IsWellRested*)res;
}

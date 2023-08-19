#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_IsRenown.hpp"
UModFilter_Player_IsRenown* UModFilter_Player_IsRenown::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_IsRenown");
    return (UModFilter_Player_IsRenown*)res;
}

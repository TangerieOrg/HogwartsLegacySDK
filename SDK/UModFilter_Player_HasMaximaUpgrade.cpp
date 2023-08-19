#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_HasMaximaUpgrade.hpp"
UModFilter_Player_HasMaximaUpgrade* UModFilter_Player_HasMaximaUpgrade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_HasMaximaUpgrade");
    return (UModFilter_Player_HasMaximaUpgrade*)res;
}

#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_HasEdurusUpgrade.hpp"
UModFilter_Player_HasEdurusUpgrade* UModFilter_Player_HasEdurusUpgrade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_HasEdurusUpgrade");
    return (UModFilter_Player_HasEdurusUpgrade*)res;
}

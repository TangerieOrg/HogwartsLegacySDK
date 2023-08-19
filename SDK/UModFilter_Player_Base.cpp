#include "UModFilter_Global_Base.hpp"
#include "UModFilter_Player_Base.hpp"
UModFilter_Player_Base* UModFilter_Player_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_Base");
    return (UModFilter_Player_Base*)res;
}

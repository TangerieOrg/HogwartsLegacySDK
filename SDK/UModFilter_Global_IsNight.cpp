#include "UModFilter_Global_Base.hpp"
#include "UModFilter_Global_IsNight.hpp"
UModFilter_Global_IsNight* UModFilter_Global_IsNight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Global_IsNight");
    return (UModFilter_Global_IsNight*)res;
}

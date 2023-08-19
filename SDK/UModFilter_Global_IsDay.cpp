#include "UModFilter_Global_Base.hpp"
#include "UModFilter_Global_IsDay.hpp"
UModFilter_Global_IsDay* UModFilter_Global_IsDay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Global_IsDay");
    return (UModFilter_Global_IsDay*)res;
}

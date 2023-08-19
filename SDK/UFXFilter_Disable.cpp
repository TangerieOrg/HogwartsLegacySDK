#include "UFXFilter.hpp"
#include "UFXFilter_Disable.hpp"
UFXFilter_Disable* UFXFilter_Disable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_Disable");
    return (UFXFilter_Disable*)res;
}

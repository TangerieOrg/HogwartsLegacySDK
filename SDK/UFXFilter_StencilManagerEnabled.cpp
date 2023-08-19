#include "UFXFilter.hpp"
#include "UFXFilter_StencilManagerEnabled.hpp"
UFXFilter_StencilManagerEnabled* UFXFilter_StencilManagerEnabled::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_StencilManagerEnabled");
    return (UFXFilter_StencilManagerEnabled*)res;
}

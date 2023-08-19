#include "EObjectSizeClass.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_IsValidSize.hpp"
UFXFilter_IsValidSize* UFXFilter_IsValidSize::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsValidSize");
    return (UFXFilter_IsValidSize*)res;
}

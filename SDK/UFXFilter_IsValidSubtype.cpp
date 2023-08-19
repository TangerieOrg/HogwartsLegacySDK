#include "UFXFilter.hpp"
#include "UFXFilter_IsValidSubtype.hpp"
UFXFilter_IsValidSubtype* UFXFilter_IsValidSubtype::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsValidSubtype");
    return (UFXFilter_IsValidSubtype*)res;
}

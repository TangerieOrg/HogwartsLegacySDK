#include "UFXFilter.hpp"
#include "UFXFilter_IsValidClass.hpp"
UFXFilter_IsValidClass* UFXFilter_IsValidClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsValidClass");
    return (UFXFilter_IsValidClass*)res;
}

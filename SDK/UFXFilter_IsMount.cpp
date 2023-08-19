#include "UFXFilter.hpp"
#include "UFXFilter_IsMount.hpp"
UFXFilter_IsMount* UFXFilter_IsMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsMount");
    return (UFXFilter_IsMount*)res;
}

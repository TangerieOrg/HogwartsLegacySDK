#include "UFXFilter.hpp"
#include "UFXFilter_IsDead.hpp"
UFXFilter_IsDead* UFXFilter_IsDead::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsDead");
    return (UFXFilter_IsDead*)res;
}

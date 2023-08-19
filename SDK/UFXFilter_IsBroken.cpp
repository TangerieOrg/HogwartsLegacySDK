#include "UFXFilter.hpp"
#include "UFXFilter_IsBroken.hpp"
UFXFilter_IsBroken* UFXFilter_IsBroken::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsBroken");
    return (UFXFilter_IsBroken*)res;
}

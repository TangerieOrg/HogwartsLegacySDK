#include "UFXEnd.hpp"
#include "UObject.hpp"
UFXEnd* UFXEnd::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.FXEnd");
    return (UFXEnd*)res;
}

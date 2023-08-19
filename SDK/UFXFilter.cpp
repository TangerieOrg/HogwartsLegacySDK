#include "UFXFilter.hpp"
#include "UObject.hpp"
UFXFilter* UFXFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.FXFilter");
    return (UFXFilter*)res;
}

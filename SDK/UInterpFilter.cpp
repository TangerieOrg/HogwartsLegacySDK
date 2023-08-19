#include "UInterpFilter.hpp"
#include "UObject.hpp"
UInterpFilter* UInterpFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpFilter");
    return (UInterpFilter*)res;
}

#include "UInterpFilter.hpp"
#include "UInterpFilter_Custom.hpp"
UInterpFilter_Custom* UInterpFilter_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpFilter_Custom");
    return (UInterpFilter_Custom*)res;
}

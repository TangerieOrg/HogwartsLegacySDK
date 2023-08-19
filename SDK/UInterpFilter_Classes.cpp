#include "UInterpFilter.hpp"
#include "UInterpFilter_Classes.hpp"
UInterpFilter_Classes* UInterpFilter_Classes::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpFilter_Classes");
    return (UInterpFilter_Classes*)res;
}

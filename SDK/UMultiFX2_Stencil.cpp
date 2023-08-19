#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_Stencil.hpp"
UMultiFX2_Stencil* UMultiFX2_Stencil::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Stencil");
    return (UMultiFX2_Stencil*)res;
}

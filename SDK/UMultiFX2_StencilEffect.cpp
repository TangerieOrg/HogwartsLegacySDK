#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_StencilEffect.hpp"
UMultiFX2_StencilEffect* UMultiFX2_StencilEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_StencilEffect");
    return (UMultiFX2_StencilEffect*)res;
}

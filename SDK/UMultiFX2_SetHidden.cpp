#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_SetHidden.hpp"
UMultiFX2_SetHidden* UMultiFX2_SetHidden::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SetHidden");
    return (UMultiFX2_SetHidden*)res;
}

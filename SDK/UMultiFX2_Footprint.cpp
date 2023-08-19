#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_Footprint.hpp"
UMultiFX2_Footprint* UMultiFX2_Footprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Footprint");
    return (UMultiFX2_Footprint*)res;
}

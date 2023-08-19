#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_Water_Ripple.hpp"
UMultiFX2_Water_Ripple* UMultiFX2_Water_Ripple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Water_Ripple");
    return (UMultiFX2_Water_Ripple*)res;
}

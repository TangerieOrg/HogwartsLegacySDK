#include "UMultiFX2_EnableCCD.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_EnableCCD* UMultiFX2_EnableCCD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_EnableCCD");
    return (UMultiFX2_EnableCCD*)res;
}

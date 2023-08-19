#include "UFXAdjustments.hpp"
#include "UFXEnd.hpp"
#include "UFXFilter.hpp"
#include "UFXUpdate.hpp"
#include "UMultiFX2_Base.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_Filtered* UMultiFX2_Filtered::StaticClass() {
    static auto res = find_uobject("Class /Script/MultiFX2.MultiFX2_Filtered");
    return (UMultiFX2_Filtered*)res;
}

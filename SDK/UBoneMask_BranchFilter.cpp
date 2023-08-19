#include "FBranchFilter.hpp"
#include "UBoneMaskBase.hpp"
#include "UBoneMask_BranchFilter.hpp"
UBoneMask_BranchFilter* UBoneMask_BranchFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BoneMask_BranchFilter");
    return (UBoneMask_BranchFilter*)res;
}

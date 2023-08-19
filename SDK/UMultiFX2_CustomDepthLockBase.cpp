#include "UMultiFX2_CustomDepthLockBase.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_CustomDepthLockBase* UMultiFX2_CustomDepthLockBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_CustomDepthLockBase");
    return (UMultiFX2_CustomDepthLockBase*)res;
}

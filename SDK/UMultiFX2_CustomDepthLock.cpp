#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UMultiFX2_CustomDepthLock.hpp"
#include "UMultiFX2_CustomDepthLockBase.hpp"
UMultiFX2_CustomDepthLock* UMultiFX2_CustomDepthLock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_CustomDepthLock");
    return (UMultiFX2_CustomDepthLock*)res;
}

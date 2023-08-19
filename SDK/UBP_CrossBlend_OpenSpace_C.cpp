#include "UBP_CrossBlend_OpenSpace_C.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
UBP_CrossBlend_OpenSpace_C* UBP_CrossBlend_OpenSpace_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_CrossBlend_OpenSpace.BP_CrossBlend_OpenSpace_C");
    return (UBP_CrossBlend_OpenSpace_C*)res;
}

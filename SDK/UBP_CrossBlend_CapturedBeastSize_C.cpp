#include "UBP_CrossBlend_CapturedBeastSize_C.hpp"
#include "UCameraStackBehaviorCrossBlendByCapturedBeastSize.hpp"
UBP_CrossBlend_CapturedBeastSize_C* UBP_CrossBlend_CapturedBeastSize_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_CrossBlend_CapturedBeastSize.BP_CrossBlend_CapturedBeastSize_C");
    return (UBP_CrossBlend_CapturedBeastSize_C*)res;
}

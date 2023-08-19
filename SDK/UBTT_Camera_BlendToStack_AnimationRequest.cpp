#include "UBTT_Camera_BlendToStackBase.hpp"
#include "UBTT_Camera_BlendToStack_AnimationRequest.hpp"
UBTT_Camera_BlendToStack_AnimationRequest* UBTT_Camera_BlendToStack_AnimationRequest::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTT_Camera_BlendToStack_AnimationRequest");
    return (UBTT_Camera_BlendToStack_AnimationRequest*)res;
}

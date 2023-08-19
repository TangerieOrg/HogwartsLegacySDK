#include "ABP_FS_AnchorField_C.hpp"
#include "AFieldSystemActor.hpp"
#include "EObjectStateTypeEnum.hpp"
#include "FTransform.hpp"
#include "UBoxComponent.hpp"
#include "UBoxFalloff.hpp"
#include "UCullingField.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
#include "UUniformInteger.hpp"
ABP_FS_AnchorField_C* ABP_FS_AnchorField_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Chaos/Blueprints/FieldNodes/Anchor/BP_FS_AnchorField.BP_FS_AnchorField_C");
    return (ABP_FS_AnchorField_C*)res;
}
void ABP_FS_AnchorField_C::UserConstructionScript(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32_t CallFunc_Conv_ByteToInt_ReturnValue, UUniformInteger* CallFunc_SetUniformInteger_ReturnValue, UBoxFalloff* CallFunc_SetBoxFalloff_ReturnValue, UCullingField* CallFunc_SetCullingField_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Anchor/BP_FS_AnchorField.BP_FS_AnchorField_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FTransform CallFunc_K2_GetComponentToWorld_ReturnValue; // 0x0
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x30
        char pad_34[0x4];
        UUniformInteger* CallFunc_SetUniformInteger_ReturnValue; // 0x38
        UBoxFalloff* CallFunc_SetBoxFalloff_ReturnValue; // 0x40
        UCullingField* CallFunc_SetCullingField_ReturnValue; // 0x48
    }; // Size: 0x50
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetComponentToWorld_ReturnValue = (FTransform)CallFunc_K2_GetComponentToWorld_ReturnValue;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.CallFunc_SetUniformInteger_ReturnValue = (UUniformInteger*)CallFunc_SetUniformInteger_ReturnValue;
    params.CallFunc_SetBoxFalloff_ReturnValue = (UBoxFalloff*)CallFunc_SetBoxFalloff_ReturnValue;
    params.CallFunc_SetCullingField_ReturnValue = (UCullingField*)CallFunc_SetCullingField_ReturnValue;
    ProcessEvent(func, &params);
}

#include "AActor.hpp"
#include "ABP_Sanc_SelfArrangingBooksBase_C.hpp"
#include "ABP_SelfArrangingBooks_C.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
ABP_Sanc_SelfArrangingBooksBase_C* ABP_Sanc_SelfArrangingBooksBase_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_SelfArrangingBooksBase.BP_Sanc_SelfArrangingBooksBase_C");
    return (ABP_Sanc_SelfArrangingBooksBase_C*)res;
}
void ABP_Sanc_SelfArrangingBooksBase_C::UserConstructionScript0(TArray<USplineComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Length_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Structures/BP_Sanc_SelfArrangingBooksBase.BP_Sanc_SelfArrangingBooksBase_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        TArray<USplineComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x0
        ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<USplineComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Self_Arranging_Books = (ABP_SelfArrangingBooks_C*)K2Node_DynamicCast_AsBP_Self_Arranging_Books;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}

#include "ABP_InventoryObject_C.hpp"
#include "ABP_Knuts_SM_C.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
ABP_Knuts_SM_C* ABP_Knuts_SM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/InventoryObjects/Blueprints/BP_Knuts_SM.BP_Knuts_SM_C");
    return (ABP_Knuts_SM_C*)res;
}
void ABP_Knuts_SM_C::UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/InventoryObjects/Blueprints/BP_Knuts_SM.BP_Knuts_SM_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0xc
        int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = (int32_t)CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
    ProcessEvent(func, &params);
}

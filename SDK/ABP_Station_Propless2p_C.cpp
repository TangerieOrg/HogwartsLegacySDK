#include "ABP_Station_C.hpp"
#include "ABP_Station_Propless2p_C.hpp"
#include "AGameStateBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Station_Propless2p_C* ABP_Station_Propless2p_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/BP_Station_Propless2p.BP_Station_Propless2p_C");
    return (ABP_Station_Propless2p_C*)res;
}
void ABP_Station_Propless2p_C::UserConstructionScript(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, AGameStateBase* CallFunc_GetGameState_ReturnValue, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_AvaIsRunningCommandlet_ReturnValue) {}
void ABP_Station_Propless2p_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/BP_Station_Propless2p.BP_Station_Propless2p_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Station_Propless2p_C::ExecuteUbergraph_BP_Station_Propless2p(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/BP_Station_Propless2p.BP_Station_Propless2p_C.ExecuteUbergraph_BP_Station_Propless2p"));
    struct Params_ExecuteUbergraph_BP_Station_Propless2p {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Station_Propless2p params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}

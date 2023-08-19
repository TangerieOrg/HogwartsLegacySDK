#include "ABP_ProxyContainerActor_C.hpp"
#include "ALODProxyContainer.hpp"
#include "E_ProxyVaultType\Type.hpp"
#include "FMeshOffset.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USeasonSelectorComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_ProxyContainerActor_C* ABP_ProxyContainerActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/ProxyLODHarvest/BP_ProxyContainerActor.BP_ProxyContainerActor_C");
    return (ABP_ProxyContainerActor_C*)res;
}
void ABP_ProxyContainerActor_C::GetLocation(int32_t Index, FVector& Output_Position, float& Output_Yaw, bool CallFunc_Array_IsValidIndex_ReturnValue, FMeshOffset CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_ProxyContainerActor.BP_ProxyContainerActor_C.GetLocation"));
    struct Params_GetLocation {
        int32_t Index; // 0x0
        FVector Output_Position; // 0x4
        float Output_Yaw; // 0x10
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x14
        char pad_15[0x3];
        FMeshOffset CallFunc_Array_Get_Item; // 0x18
    }; // Size: 0x28
    Params_GetLocation params{};
    params.Index = (int32_t)Index;
    params.Output_Position = (FVector)Output_Position;
    params.Output_Yaw = (float)Output_Yaw;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_Array_Get_Item = (FMeshOffset)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
    Output_Position = params.Output_Position;
    Output_Yaw = params.Output_Yaw;
}
void ABP_ProxyContainerActor_C::CheckSeasonMaterialsValid(bool& AllValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BP_ProxyContainerActor.BP_ProxyContainerActor_C.CheckSeasonMaterialsValid"));
    struct Params_CheckSeasonMaterialsValid {
        bool AllValid; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        bool CallFunc_IsValid_ReturnValue_1; // 0x2
        bool CallFunc_IsValid_ReturnValue_2; // 0x3
    }; // Size: 0x4
    Params_CheckSeasonMaterialsValid params{};
    params.AllValid = (bool)AllValid;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    ProcessEvent(func, &params);
    AllValid = params.AllValid;
}
void ABP_ProxyContainerActor_C::UserConstructionScript(UStaticMeshComponent* StaticMeshComponent, USeasonSelectorComponent* SeasonSelectorComponent) {}

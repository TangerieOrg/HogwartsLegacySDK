#include "AActor.hpp"
#include "ABP_IsmObjectStateMapper_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_ISMObjectMapperData.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UIsmDestructionManager.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
void ABP_IsmObjectStateMapper_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_IsmObjectStateMapper.BP_IsmObjectStateMapper_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_IsmObjectStateMapper_C* ABP_IsmObjectStateMapper_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_IsmObjectStateMapper.BP_IsmObjectStateMapper_C");
    return (ABP_IsmObjectStateMapper_C*)res;
}
void ABP_IsmObjectStateMapper_C::ExecuteUbergraph_BP_IsmObjectStateMapper(int32_t EntryPoint, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, FSTR_ISMObjectMapperData CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UIsmDestructionManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_IsmObjectStateMapper.BP_IsmObjectStateMapper_C.ExecuteUbergraph_BP_IsmObjectStateMapper"));
    struct Params_ExecuteUbergraph_BP_IsmObjectStateMapper {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        TArray<FName> CallFunc_GetDataTableRowNames_OutRowNames; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c
        FName CallFunc_Array_Get_Item; // 0x20
        FSTR_ISMObjectMapperData CallFunc_GetDataTableRowFromName_OutRow; // 0x28
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x78
        char pad_79[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x7c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x80
        char pad_81[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x84
        UIsmDestructionManager* CallFunc_Get_ReturnValue; // 0x88
    }; // Size: 0x90
    Params_ExecuteUbergraph_BP_IsmObjectStateMapper params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetDataTableRowNames_OutRowNames = (TArray<FName>)CallFunc_GetDataTableRowNames_OutRowNames;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FSTR_ISMObjectMapperData)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UIsmDestructionManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetDataTableRowNames_OutRowNames = params.CallFunc_GetDataTableRowNames_OutRowNames;
}

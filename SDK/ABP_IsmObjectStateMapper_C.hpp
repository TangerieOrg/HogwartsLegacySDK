#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_ISMObjectMapperData.hpp"
class USceneComponent;
class UPrimitiveComponent;
class UInstancedStaticMeshComponent;
class UDataTable;
class UIsmDestructionManager;
#pragma pack(push, 1)
class ABP_IsmObjectStateMapper_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    UPrimitiveComponent* HitComponent; // 0x258
    UInstancedStaticMeshComponent* ISMComponent; // 0x260
    UIsmDestructionManager* ISM_Destruction_Manager; // 0x268
    UDataTable* ObjectDataTable; // 0x270
    static ABP_IsmObjectStateMapper_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_IsmObjectStateMapper(int32_t EntryPoint, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, FSTR_ISMObjectMapperData CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UIsmDestructionManager* CallFunc_Get_ReturnValue);
}; // Size: 0x278
#pragma pack(pop)

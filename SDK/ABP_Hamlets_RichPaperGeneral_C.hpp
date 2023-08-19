#pragma once
#include <cstdint>
#include "ABP_InventoryObject_C.hpp"
#include "ECalloutActions.hpp"
#include "ECalloutType.hpp"
#include "FCalloutInformation.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
#pragma pack(push, 1)
class ABP_Hamlets_RichPaperGeneral_C : public ABP_InventoryObject_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x350
    UChildActorComponent* BP_HM_HW_MappedItems_Marker; // 0x358
    char pad_360[0x18];
    ECalloutType Callout_Type; // 0x378
    ECalloutActions Callout_Action; // 0x379
    char pad_37a[0x6];
    static ABP_Hamlets_RichPaperGeneral_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Hamlets_RichPaperGeneral(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, FCalloutInformation K2Node_MakeStruct_CalloutInformation);
}; // Size: 0x380
#pragma pack(pop)

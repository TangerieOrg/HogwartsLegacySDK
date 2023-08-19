#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "E_OL_ChestCategory\Type.hpp"
#include "E_OL_ChestCoverType\Type.hpp"
#include "E_OL_ChestType\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class UChildActorComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_OL_Chest_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* Parent; // 0x250
    UChildActorComponent* BP_OL_Chest_Marker; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    E_OL_ChestType::Type Chest_Type; // 0x268
    char pad_269[0x3];
    int32_t Prop_Index; // 0x26c
    E_OL_ChestCategory::Type Chest_Category; // 0x270
    E_OL_ChestCoverType::Type Chest_Cover_Type; // 0x271
    char pad_272[0x5e];
    FTransform Zero; // 0x2d0
    FTransform Offset; // 0x300
    FName ChestOwner; // 0x330
    char pad_338[0x8];
    static ABP_OL_Chest_C* StaticClass();
    void UserConstructionScript0(FTransform Temp_struct_Variable, FTransform Temp_struct_Variable_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue_1, FTransform Temp_struct_Variable_2, FTransform Temp_struct_Variable_3, UChildActorComponent* CallFunc_AddComponent_ReturnValue_2, UChildActorComponent* CallFunc_AddComponent_ReturnValue_3, FTransform Temp_struct_Variable_4, FTransform Temp_struct_Variable_5, UChildActorComponent* CallFunc_AddComponent_ReturnValue_4, UChildActorComponent* CallFunc_AddComponent_ReturnValue_5, FTransform Temp_struct_Variable_6, FTransform Temp_struct_Variable_7, UChildActorComponent* CallFunc_AddComponent_ReturnValue_6, UChildActorComponent* CallFunc_AddComponent_ReturnValue_7, FTransform Temp_struct_Variable_8, FTransform Temp_struct_Variable_9, UChildActorComponent* CallFunc_AddComponent_ReturnValue_8, UChildActorComponent* CallFunc_AddComponent_ReturnValue_9, FTransform Temp_struct_Variable_10, FTransform Temp_struct_Variable_11, UChildActorComponent* CallFunc_AddComponent_ReturnValue_10, UChildActorComponent* CallFunc_AddComponent_ReturnValue_11, FTransform Temp_struct_Variable_12, FTransform Temp_struct_Variable_13, UChildActorComponent* CallFunc_AddComponent_ReturnValue_12, UChildActorComponent* CallFunc_AddComponent_ReturnValue_13, FTransform Temp_struct_Variable_14, UChildActorComponent* CallFunc_AddComponent_ReturnValue_14, FTransform Temp_struct_Variable_15, FTransform Temp_struct_Variable_16, UChildActorComponent* CallFunc_AddComponent_ReturnValue_15, UChildActorComponent* CallFunc_AddComponent_ReturnValue_16, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_12, bool CallFunc_EqualEqual_IntInt_ReturnValue_13, bool CallFunc_EqualEqual_IntInt_ReturnValue_14, bool K2Node_SwitchEnum_CmpSuccess);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_OL_Chest(int32_t EntryPoint);
}; // Size: 0x340
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class USceneComponent;
class ABP_BroomBalloon_C;
class UObject;
#pragma pack(push, 1)
class ABP_BalloonGroup_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UChildActorComponent* BP_BroomActivityBalloonGroup_Marker; // 0x250
    UChildActorComponent* Balloon_4; // 0x258
    UChildActorComponent* Balloon_3; // 0x260
    UChildActorComponent* Balloon_2; // 0x268
    UChildActorComponent* Balloon_1; // 0x270
    UChildActorComponent* Balloon_0; // 0x278
    USceneComponent* DefaultSceneRoot; // 0x280
    TArray<bool> BalloonPoppedArray; // 0x288
    float Time_to_respawn; // 0x298
    bool Is_ZSG_Area1; // 0x29c
    bool Is_ZSG_Area2; // 0x29d
    char pad_29e[0x2];
    UChildActorComponent* ChildActorArray; // 0x2a0
    bool Is_ZZM_Area1; // 0x2a8
    bool Is_ZZM_Area2; // 0x2a9
    char pad_2aa[0x6];
    FString SaveStateName; // 0x2b0
    int32_t BeaconHandle; // 0x2c0
    char pad_2c4[0x4];
    TArray<int32_t> BalloonMaterialArray; // 0x2c8
    TArray<ABP_BroomBalloon_C*> BalloonArray; // 0x2d8
    static ABP_BalloonGroup_C* StaticClass();
    void UserConstructionScript0(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon, bool K2Node_DynamicCast_bSuccess, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_1, bool K2Node_DynamicCast_bSuccess_1, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_2, bool K2Node_DynamicCast_bSuccess_2, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_3, bool K2Node_DynamicCast_bSuccess_3, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_4, bool K2Node_DynamicCast_bSuccess_4, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue_1, UChildActorComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_5, bool K2Node_DynamicCast_bSuccess_5);
    void ReceiveBeginPlay0();
    void Respawn_Ballon_0();
    void BalloonPopped(UObject* Caller);
    void Respawn_Ballon_1();
    void Respawn_Ballon_2();
    void Respawn_Ballon_3();
    void Respawn_Ballon_4();
    void Vendor_Broom_Acquired_Unlocked(UObject* Caller);
    void ExecuteUbergraph_BP_BalloonGroup(int32_t EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9);
}; // Size: 0x2e8
#pragma pack(pop)

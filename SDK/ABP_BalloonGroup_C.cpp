#include "AActor.hpp"
#include "ABP_BalloonGroup_C.hpp"
#include "ABP_BroomBalloon_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
void ABP_BalloonGroup_C::Vendor_Broom_Acquired_Unlocked(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.Vendor_Broom_Acquired_Unlocked"));
    struct Params_Vendor_Broom_Acquired_Unlocked {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_Vendor_Broom_Acquired_Unlocked params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
ABP_BalloonGroup_C* ABP_BalloonGroup_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C");
    return (ABP_BalloonGroup_C*)res;
}
void ABP_BalloonGroup_C::UserConstructionScript0(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon, bool K2Node_DynamicCast_bSuccess, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_1, bool K2Node_DynamicCast_bSuccess_1, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_2, bool K2Node_DynamicCast_bSuccess_2, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_3, bool K2Node_DynamicCast_bSuccess_3, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_4, bool K2Node_DynamicCast_bSuccess_4, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, int32_t CallFunc_Array_Length_ReturnValue_1, UChildActorComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_5, bool K2Node_DynamicCast_bSuccess_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        bool K2Node_SwitchInteger_CmpSuccess; // 0x10
        char pad_11[0x7];
        ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_1; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
        char pad_31[0x7];
        ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_2; // 0x38
        bool K2Node_DynamicCast_bSuccess_2; // 0x40
        char pad_41[0x7];
        ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_3; // 0x48
        bool K2Node_DynamicCast_bSuccess_3; // 0x50
        char pad_51[0x7];
        ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_4; // 0x58
        bool K2Node_DynamicCast_bSuccess_4; // 0x60
        char pad_61[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x64
        int32_t CallFunc_Array_Get_Item; // 0x68
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x6c
        int32_t CallFunc_Array_Length_ReturnValue; // 0x70
        bool CallFunc_Less_IntInt_ReturnValue; // 0x74
        char pad_75[0x3];
        TArray<UChildActorComponent*> K2Node_MakeArray_Array; // 0x78
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x88
        char pad_8c[0x4];
        UChildActorComponent* CallFunc_Array_Get_Item_1; // 0x90
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x98
        char pad_99[0x7];
        ABP_BroomBalloon_C* K2Node_DynamicCast_AsBP_Broom_Balloon_5; // 0xa0
        bool K2Node_DynamicCast_bSuccess_5; // 0xa8
    }; // Size: 0xa9
    Params_UserConstructionScript params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.K2Node_DynamicCast_AsBP_Broom_Balloon = (ABP_BroomBalloon_C*)K2Node_DynamicCast_AsBP_Broom_Balloon;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBP_Broom_Balloon_1 = (ABP_BroomBalloon_C*)K2Node_DynamicCast_AsBP_Broom_Balloon_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_DynamicCast_AsBP_Broom_Balloon_2 = (ABP_BroomBalloon_C*)K2Node_DynamicCast_AsBP_Broom_Balloon_2;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.K2Node_DynamicCast_AsBP_Broom_Balloon_3 = (ABP_BroomBalloon_C*)K2Node_DynamicCast_AsBP_Broom_Balloon_3;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    params.K2Node_DynamicCast_AsBP_Broom_Balloon_4 = (ABP_BroomBalloon_C*)K2Node_DynamicCast_AsBP_Broom_Balloon_4;
    params.K2Node_DynamicCast_bSuccess_4 = (bool)K2Node_DynamicCast_bSuccess_4;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<UChildActorComponent*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (UChildActorComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.K2Node_DynamicCast_AsBP_Broom_Balloon_5 = (ABP_BroomBalloon_C*)K2Node_DynamicCast_AsBP_Broom_Balloon_5;
    params.K2Node_DynamicCast_bSuccess_5 = (bool)K2Node_DynamicCast_bSuccess_5;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void ABP_BalloonGroup_C::BalloonPopped(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.BalloonPopped"));
    struct Params_BalloonPopped {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BalloonPopped params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::Respawn_Ballon_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 3"));
    struct Params_Respawn_Ballon_3 {
    }; // Size: 0x0
    Params_Respawn_Ballon_3 params{};
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::Respawn_Ballon_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 0"));
    struct Params_Respawn_Ballon_0 {
    }; // Size: 0x0
    Params_Respawn_Ballon_0 params{};
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::Respawn_Ballon_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 1"));
    struct Params_Respawn_Ballon_1 {
    }; // Size: 0x0
    Params_Respawn_Ballon_1 params{};
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::Respawn_Ballon_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 2"));
    struct Params_Respawn_Ballon_2 {
    }; // Size: 0x0
    Params_Respawn_Ballon_2 params{};
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::Respawn_Ballon_4() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Mechanics/Broom/Balloons/BP_BalloonGroup.BP_BalloonGroup_C.Respawn Ballon 4"));
    struct Params_Respawn_Ballon_4 {
    }; // Size: 0x0
    Params_Respawn_Ballon_4 params{};
    ProcessEvent(func, &params);
}
void ABP_BalloonGroup_C::ExecuteUbergraph_BP_BalloonGroup(int32_t EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9) {}

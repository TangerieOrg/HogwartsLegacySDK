#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACreature_Character.hpp"
#include "AFlyingBroom.hpp"
#include "APawn.hpp"
#include "EBroomMountType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFL_Brooms_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UFL_Brooms_C* UFL_Brooms_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/Broom/Blueprints/FL_Brooms.FL_Brooms_C");
    return (UFL_Brooms_C*)res;
}
void UFL_Brooms_C::IsPlayerWalking(UObject* Biped_Player, UObject* __WorldContext, bool& IsWalking_, bool IsWalking, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_2, AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/FL_Brooms.FL_Brooms_C.IsPlayerWalking"));
    struct Params_IsPlayerWalking {
        UObject* Biped_Player; // 0x0
        UObject* __WorldContext; // 0x8
        bool IsWalking_; // 0x10
        bool IsWalking; // 0x11
        char pad_12[0x6];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x28
        bool K2Node_DynamicCast_bSuccess_1; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x31
        char pad_32[0x6];
        AActor* CallFunc_GetAttachParentActor_ReturnValue; // 0x38
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1; // 0x40
        bool K2Node_DynamicCast_bSuccess_2; // 0x48
        char pad_49[0x7];
        AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom; // 0x50
        bool K2Node_DynamicCast_bSuccess_3; // 0x58
        bool CallFunc_IsValid_ReturnValue_1; // 0x59
    }; // Size: 0x5a
    Params_IsPlayerWalking params{};
    params.Biped_Player = (UObject*)Biped_Player;
    params.__WorldContext = (UObject*)__WorldContext;
    params.IsWalking_ = (bool)IsWalking_;
    params.IsWalking = (bool)IsWalking;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Character_1 = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character_1;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.K2Node_DynamicCast_AsFlying_Broom = (AFlyingBroom*)K2Node_DynamicCast_AsFlying_Broom;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    IsWalking_ = params.IsWalking_;
}
void UFL_Brooms_C::PutPlayerOnBroom(AActor* InActor, UClass* InBroomCapsule, UClass* InBroomProp, EBroomMountType MountType, UObject* __WorldContext, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/FL_Brooms.FL_Brooms_C.PutPlayerOnBroom"));
    struct Params_PutPlayerOnBroom {
        AActor* InActor; // 0x0
        UClass* InBroomCapsule; // 0x8
        UClass* InBroomProp; // 0x10
        EBroomMountType MountType; // 0x18
        char pad_19[0x7];
        UObject* __WorldContext; // 0x20
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x34
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0x3c
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x44
    }; // Size: 0x4c
    Params_PutPlayerOnBroom params{};
    params.InActor = (AActor*)InActor;
    params.InBroomCapsule = (UClass*)InBroomCapsule;
    params.InBroomProp = (UClass*)InBroomProp;
    params.MountType = (EBroomMountType)MountType;
    params.__WorldContext = (UObject*)__WorldContext;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFL_Brooms_C::GetPlayerBroom(AActor* Caller, UObject* __WorldContext, AFlyingBroom*& Player_Broom, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/Broom/Blueprints/FL_Brooms.FL_Brooms_C.GetPlayerBroom"));
    struct Params_GetPlayerBroom {
        AActor* Caller; // 0x0
        UObject* __WorldContext; // 0x8
        AFlyingBroom* Player_Broom; // 0x10
        APawn* CallFunc_GetPlayerPawn_ReturnValue; // 0x18
        AActor* CallFunc_GetAttachParentActor_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x7];
        AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
    }; // Size: 0x39
    Params_GetPlayerBroom params{};
    params.Caller = (AActor*)Caller;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Player_Broom = (AFlyingBroom*)Player_Broom;
    params.CallFunc_GetPlayerPawn_ReturnValue = (APawn*)CallFunc_GetPlayerPawn_ReturnValue;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_DynamicCast_AsFlying_Broom = (AFlyingBroom*)K2Node_DynamicCast_AsFlying_Broom;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Player_Broom = params.Player_Broom;
}

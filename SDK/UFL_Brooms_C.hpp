#pragma once
#include <cstdint>
#include "EBroomMountType.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class ABiped_Player;
class ACreature_Character;
class AActor;
class AFlyingBroom;
class UClass;
class APawn;
#pragma pack(push, 1)
class UFL_Brooms_C : public UBlueprintFunctionLibrary {
public:
    static UFL_Brooms_C* StaticClass();
    static void IsPlayerWalking(UObject* Biped_Player, UObject* __WorldContext, bool& IsWalking_, bool IsWalking, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_2, AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1);
    static void GetPlayerBroom(AActor* Caller, UObject* __WorldContext, AFlyingBroom*& Player_Broom, APawn* CallFunc_GetPlayerPawn_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, AFlyingBroom* K2Node_DynamicCast_AsFlying_Broom, bool K2Node_DynamicCast_bSuccess);
    static void PutPlayerOnBroom(AActor* InActor, UClass* InBroomCapsule, UClass* InBroomProp, EBroomMountType MountType, UObject* __WorldContext, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2);
}; // Size: 0x28
#pragma pack(pop)

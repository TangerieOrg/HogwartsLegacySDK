#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTT_FollowSpline_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float MaxTime; // 0xb0
    float ElapsedTime; // 0xb4
    FName PathNodeLocKeyName; // 0xb8
    FName PathNodeRadiusKeyName; // 0xc0
    bool Started; // 0xc8
    char pad_c9[0x7];
    static UBTT_FollowSpline_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_FollowSpline(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_UpdateFollowSpline_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)

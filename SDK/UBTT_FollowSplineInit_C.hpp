#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTT_FollowSplineInit_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float MaxTime; // 0xb0
    float ElapsedTime; // 0xb4
    FName PathNodeLocKeyName; // 0xb8
    FName PathNodeRadiusKeyName; // 0xc0
    float StartTimer; // 0xc8
    bool Started; // 0xcc
    char pad_cd[0x3];
    static UBTT_FollowSplineInit_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_FollowSplineInit(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xd0
#pragma pack(pop)

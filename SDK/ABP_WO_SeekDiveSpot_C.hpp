#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ULootDropComponent;
class UObject;
class UCognitionStimuliSourceComponent;
class ABiped_Player;
class UAkComponent;
class USceneComponent;
class UNiagaraComponent;
class UFlowRippleSubsystem;
#pragma pack(push, 1)
class ABP_WO_SeekDiveSpot_C : public AWorldObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UChildActorComponent* BP_SeekDiveSpot_Marker; // 0x2b8
    ULootDropComponent* LootDrop; // 0x2c0
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2c8
    UAkComponent* Ak_BP_WO_SeekDiveSpot; // 0x2d0
    UNiagaraComponent* Niagara; // 0x2d8
    USceneComponent* DefaultSceneRoot; // 0x2e0
    float RippleIntensity; // 0x2e8
    float RippleRadius; // 0x2ec
    float RippleFrequency; // 0x2f0
    float DiveDuration; // 0x2f4
    bool LootCollected; // 0x2f8
    char pad_2f9[0x7];
    FString SaveDataName; // 0x300
    bool HasDived; // 0x310
    char pad_311[0x7];
    static ABP_WO_SeekDiveSpot_C* StaticClass();
    void CheckPlayerMovementMode(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Vector_GetAbs_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32_t CallFunc_Round_ReturnValue, int32_t CallFunc_Round_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_Round_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void StopAudio();
    void InteractionInitiated(UObject* Caller);
    void MovementModeChanged(UObject* Caller);
    void ExecuteUbergraph_BP_WO_SeekDiveSpot(int32_t EntryPoint, UFlowRippleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
}; // Size: 0x318
#pragma pack(pop)

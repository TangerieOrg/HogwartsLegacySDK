#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCognitionStimuliSourceComponent;
class UObject;
class ABiped_Player;
class USceneComponent;
class AEnemy_Character;
#pragma pack(push, 1)
class ABP_StealthTakedownInteractActor_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    AEnemy_Character* AutoTargetEnemy; // 0x260
    bool StealthAttackDisabled; // 0x268
    char pad_269[0x7];
    static ABP_StealthTakedownInteractActor_C* StaticClass();
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_StealthTakedownInteractActor(int32_t EntryPoint, float K2Node_Event_DeltaSeconds, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason);
}; // Size: 0x270
#pragma pack(pop)

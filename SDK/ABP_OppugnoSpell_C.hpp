#pragma once
#include <cstdint>
#include "AOppugnoSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UAkComponent;
class USceneComponent;
class UClass;
class AActor;
#pragma pack(push, 1)
class ABP_OppugnoSpell_C : public AOppugnoSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc50
    UAkComponent* Ak_audio_location; // 0xc58
    USceneComponent* DefaultSceneRoot; // 0xc60
    UClass* CamShake; // 0xc68
    static ABP_OppugnoSpell_C* StaticClass();
    void ReceiveBeginPlay();
    void OnCastSpell(AActor* Target, FVector& Location, FVector& MuzzleLocation);
    void ExecuteUbergraph_BP_OppugnoSpell(int32_t EntryPoint, AActor* CallFunc_GetCharacterActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, AActor* K2Node_Event_Target, FVector K2Node_Event_Location, FVector K2Node_Event_MuzzleLocation, bool CallFunc_IsToolUsedByPlayer_ReturnValue);
}; // Size: 0xc70
#pragma pack(pop)

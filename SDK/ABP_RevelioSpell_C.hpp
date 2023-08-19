#pragma once
#include <cstdint>
#include "ARevelioSpellTool.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
class UAkAudioEvent;
class UTimelineComponent;
class AActor;
class UAkComponent;
class UNiagaraParameterCollectionInstance;
#pragma pack(push, 1)
class ABP_RevelioSpell_C : public ARevelioSpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x9b0
    USceneComponent* DefaultSceneRoot; // 0x9b8
    float Timeline_0_FXMaterials_29DD10F54BA9547458C67886AC9AF275; // 0x9c0
    float Timeline_0_Strength_29DD10F54BA9547458C67886AC9AF275; // 0x9c4
    ETimelineDirection::Type Timeline_0__Direction_29DD10F54BA9547458C67886AC9AF275; // 0x9c8
    char pad_9c9[0x7];
    UTimelineComponent* Timeline_0; // 0x9d0
    AActor* Target; // 0x9d8
    static ABP_RevelioSpell_C* StaticClass();
    void PostAtEventAtLocationNoOcclusion(FVector Location, UAkAudioEvent* Ak_Event, UAkComponent*& Ak_Component, UAkAudioEvent* AkEvent, UAkComponent* AkComponent, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__audio_off__EventFunc();
    void ReceiveBeginPlay();
    void OnCastSpell(AActor* Target, FVector& Location, FVector& MuzzleLocation);
    void OnStart();
    void OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected);
    void ExecuteUbergraph_BP_RevelioSpell(int32_t EntryPoint, AActor* K2Node_Event_Target_1, FVector K2Node_Event_Location, FVector K2Node_Event_MuzzleLocation, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, FVector CallFunc_K2_GetActorLocation_ReturnValue, FLinearColor CallFunc_GetVectorParameterValue_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UAkComponent* CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component, UAkComponent* CallFunc_PostAtEventAtLocationNoOcclusion_Ak_Component_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue);
}; // Size: 0x9e0
#pragma pack(pop)

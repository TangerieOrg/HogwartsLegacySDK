#pragma once
#include <cstdint>
#include "AInventoryObject.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class UCognitionStimuliSourceComponent;
class UObject;
class ABiped_Player;
class UInteractiveObjectComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_EnemyDrop_SpiderFang_C : public AInventoryObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x330
    UStaticMeshComponent* StaticMesh; // 0x338
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x340
    UInteractiveObjectComponent* InteractiveObject; // 0x348
    UNiagaraComponent* Beacon; // 0x350
    bool Collected; // 0x358
    bool AllowBeacon; // 0x359
    char pad_35a[0x2];
    float fxStartTime; // 0x35c
    float fxScaleInDuration; // 0x360
    float fxScaleOutDuration; // 0x364
    static ABP_EnemyDrop_SpiderFang_C* StaticClass();
    void ReceiveBeginPlay();
    void NotifyPickedUp0(FName ItemId, int32_t ItemCount);
    void ShowNonCinematicElements(UObject* Caller);
    void HideNonCinematicElements(UObject* Caller);
    void Perceived_Interact(UObject* Caller);
    void NoLongerPerceived_Interact(UObject* Caller);
    void ExecuteUbergraph_BP_EnemyDrop_SpiderFang(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
}; // Size: 0x368
#pragma pack(pop)

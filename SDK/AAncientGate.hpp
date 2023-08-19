#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECollisionResponse.hpp"
#include "FLinearColor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class AAncientGate : public AActor {
public:
    USceneComponent* m_CurrentLeft; // 0x248
    USceneComponent* m_CurrentRight; // 0x250
    char pad_258[0x38];
    static AAncientGate* StaticClass();
    void SetAllCollisions(TArray<AActor*> i_RedTarget, TArray<AActor*> i_BlueTarget);
    void SetActorCollision(AActor* i_Actor, ECollisionResponse i_Response);
    void Rotating();
    void Recall(AActor* Who, AActor* Pedestal);
    void MaterialSetup(TArray<AActor*>& i_Target);
    void MaterialCutoutFlip();
    void InitialMaterialSetup(TArray<AActor*> i_RedTarget, TArray<AActor*> i_BlueTarget);
    void AncientGateSetup(USceneComponent* i_ArrowComponent, USceneComponent* i_LeftPoint, USceneComponent* i_RightPoint, FLinearColor i_RedColor, FLinearColor i_BlueColor);
}; // Size: 0x290
#pragma pack(pop)

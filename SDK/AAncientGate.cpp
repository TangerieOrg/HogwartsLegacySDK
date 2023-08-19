#include "AActor.hpp"
#include "AAncientGate.hpp"
#include "ECollisionResponse.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void AAncientGate::AncientGateSetup(USceneComponent* i_ArrowComponent, USceneComponent* i_LeftPoint, USceneComponent* i_RightPoint, FLinearColor i_RedColor, FLinearColor i_BlueColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientGate.AncientGateSetup"));
    struct Params_AncientGateSetup {
        USceneComponent* i_ArrowComponent; // 0x0
        USceneComponent* i_LeftPoint; // 0x8
        USceneComponent* i_RightPoint; // 0x10
        FLinearColor i_RedColor; // 0x18
        FLinearColor i_BlueColor; // 0x28
    }; // Size: 0x38
    Params_AncientGateSetup params{};
    params.i_ArrowComponent = (USceneComponent*)i_ArrowComponent;
    params.i_LeftPoint = (USceneComponent*)i_LeftPoint;
    params.i_RightPoint = (USceneComponent*)i_RightPoint;
    params.i_RedColor = (FLinearColor)i_RedColor;
    params.i_BlueColor = (FLinearColor)i_BlueColor;
    ProcessEvent(func, &params);
}
AAncientGate* AAncientGate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientGate");
    return (AAncientGate*)res;
}
void AAncientGate::SetAllCollisions(TArray<AActor*> i_RedTarget, TArray<AActor*> i_BlueTarget) {}
void AAncientGate::SetActorCollision(AActor* i_Actor, ECollisionResponse i_Response) {}
void AAncientGate::MaterialSetup(TArray<AActor*>& i_Target) {}
void AAncientGate::Rotating() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientGate.Rotating"));
    struct Params_Rotating {
    }; // Size: 0x0
    Params_Rotating params{};
    ProcessEvent(func, &params);
}
void AAncientGate::Recall(AActor* Who, AActor* Pedestal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientGate.Recall"));
    struct Params_Recall {
        AActor* Who; // 0x0
        AActor* Pedestal; // 0x8
    }; // Size: 0x10
    Params_Recall params{};
    params.Who = (AActor*)Who;
    params.Pedestal = (AActor*)Pedestal;
    ProcessEvent(func, &params);
}
void AAncientGate::MaterialCutoutFlip() {}
void AAncientGate::InitialMaterialSetup(TArray<AActor*> i_RedTarget, TArray<AActor*> i_BlueTarget) {}

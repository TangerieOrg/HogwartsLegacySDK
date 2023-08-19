#include "AActor.hpp"
#include "ADevilsSnare.hpp"
#include "EDevilsSnareState.hpp"
#include "FDevilsSnareInfo.hpp"
#include "FDevilsSnareLumosReact.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "UBoxComponent.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ADevilsSnare::Reveal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.Reveal"));
    struct Params_Reveal {
    }; // Size: 0x0
    Params_Reveal params{};
    ProcessEvent(func, &params);
}
void ADevilsSnare::OnOverlapEndForLightAndFire(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.OnOverlapEndForLightAndFire"));
    struct Params_OnOverlapEndForLightAndFire {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEndForLightAndFire params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
ADevilsSnare* ADevilsSnare::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DevilsSnare");
    return (ADevilsSnare*)res;
}
void ADevilsSnare::PlayerLumosStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.PlayerLumosStart"));
    struct Params_PlayerLumosStart {
    }; // Size: 0x0
    Params_PlayerLumosStart params{};
    ProcessEvent(func, &params);
}
void ADevilsSnare::UpdateMeshMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.UpdateMeshMaterial"));
    struct Params_UpdateMeshMaterial {
    }; // Size: 0x0
    Params_UpdateMeshMaterial params{};
    ProcessEvent(func, &params);
}
void ADevilsSnare::StopRecoiling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.StopRecoiling"));
    struct Params_StopRecoiling {
    }; // Size: 0x0
    Params_StopRecoiling params{};
    ProcessEvent(func, &params);
}
void ADevilsSnare::StartRecoil(float RecoilPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.StartRecoil"));
    struct Params_StartRecoil {
        float RecoilPercent; // 0x0
    }; // Size: 0x4
    Params_StartRecoil params{};
    params.RecoilPercent = (float)RecoilPercent;
    ProcessEvent(func, &params);
}
void ADevilsSnare::DodgeStop(AActor* InPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.DodgeStop"));
    struct Params_DodgeStop {
        AActor* InPlayer; // 0x0
    }; // Size: 0x8
    Params_DodgeStop params{};
    params.InPlayer = (AActor*)InPlayer;
    ProcessEvent(func, &params);
}
void ADevilsSnare::PlayerLumosEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.PlayerLumosEnd"));
    struct Params_PlayerLumosEnd {
    }; // Size: 0x0
    Params_PlayerLumosEnd params{};
    ProcessEvent(func, &params);
}
void ADevilsSnare::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ADevilsSnare::OnOverlapBeginForLightAndFire(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.OnOverlapBeginForLightAndFire"));
    struct Params_OnOverlapBeginForLightAndFire {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBeginForLightAndFire params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ADevilsSnare::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ADevilsSnare::HitBySpell(float RecoilPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.HitBySpell"));
    struct Params_HitBySpell {
        float RecoilPercent; // 0x0
    }; // Size: 0x4
    Params_HitBySpell params{};
    params.RecoilPercent = (float)RecoilPercent;
    ProcessEvent(func, &params);
}
void ADevilsSnare::DelayedSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnare.DelayedSetup"));
    struct Params_DelayedSetup {
    }; // Size: 0x0
    Params_DelayedSetup params{};
    ProcessEvent(func, &params);
}

#include "AActor.hpp"
#include "ADevilsSnareDynamic.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
ADevilsSnareDynamic* ADevilsSnareDynamic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DevilsSnareDynamic");
    return (ADevilsSnareDynamic*)res;
}
bool ADevilsSnareDynamic::UnslowPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.UnslowPlayer"));
    struct Params_UnslowPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UnslowPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADevilsSnareDynamic::TickDeactivated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.TickDeactivated"));
    struct Params_TickDeactivated {
    }; // Size: 0x0
    Params_TickDeactivated params{};
    ProcessEvent(func, &params);
}
void ADevilsSnareDynamic::TickActivated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.TickActivated"));
    struct Params_TickActivated {
    }; // Size: 0x0
    Params_TickActivated params{};
    ProcessEvent(func, &params);
}
void ADevilsSnareDynamic::OnOverlapSphereEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.OnOverlapSphereEnd"));
    struct Params_OnOverlapSphereEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapSphereEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
bool ADevilsSnareDynamic::SlowPlayer(float SpeedLimit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.SlowPlayer"));
    struct Params_SlowPlayer {
        float SpeedLimit; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SlowPlayer params{};
    params.SpeedLimit = (float)SpeedLimit;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADevilsSnareDynamic::PlayerLumosStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.PlayerLumosStart"));
    struct Params_PlayerLumosStart {
    }; // Size: 0x0
    Params_PlayerLumosStart params{};
    ProcessEvent(func, &params);
}
void ADevilsSnareDynamic::PlayerLumosEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.PlayerLumosEnd"));
    struct Params_PlayerLumosEnd {
    }; // Size: 0x0
    Params_PlayerLumosEnd params{};
    ProcessEvent(func, &params);
}
void ADevilsSnareDynamic::OnOverlapSphereBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.OnOverlapSphereBegin"));
    struct Params_OnOverlapSphereBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapSphereBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
bool ADevilsSnareDynamic::FindClosestLightSourcePos(FVector& SnarePos, FVector& OutPos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.FindClosestLightSourcePos"));
    struct Params_FindClosestLightSourcePos {
        FVector SnarePos; // 0x0
        FVector OutPos; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_FindClosestLightSourcePos params{};
    params.SnarePos = (FVector)SnarePos;
    params.OutPos = (FVector)OutPos;
    ProcessEvent(func, &params);
    SnarePos = params.SnarePos;
    OutPos = params.OutPos;
    return (bool)params.ReturnValue;
}
void ADevilsSnareDynamic::BeginPlayDelayed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DevilsSnareDynamic.BeginPlayDelayed"));
    struct Params_BeginPlayDelayed {
    }; // Size: 0x0
    Params_BeginPlayDelayed params{};
    ProcessEvent(func, &params);
}

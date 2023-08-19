#include "AActor.hpp"
#include "AObjectFadeMaster.hpp"
#include "EObjectFadeCompletedAction.hpp"
#include "EObjectFadeDirection.hpp"
#include "EObjectFadeMasterState.hpp"
#include "FObjectFadeParamsCurve.hpp"
#include "FObjectFadeParamsEaseFunction.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
void AObjectFadeMaster::MeshIsFadingIn(UMeshComponent* Mesh, bool& isFading, bool& isDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.MeshIsFadingIn"));
    struct Params_MeshIsFadingIn {
        UMeshComponent* Mesh; // 0x0
        bool isFading; // 0x8
        bool isDone; // 0x9
    }; // Size: 0xa
    Params_MeshIsFadingIn params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.isFading = (bool)isFading;
    params.isDone = (bool)isDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    isFading = params.isFading;
    isDone = params.isDone;
}
AObjectFadeMaster* AObjectFadeMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.ObjectFadeMaster");
    return (AObjectFadeMaster*)res;
}
bool AObjectFadeMaster::MeshStartFadeEaseFunction(UMeshComponent* Mesh, FObjectFadeParamsEaseFunction& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.MeshStartFadeEaseFunction"));
    struct Params_MeshStartFadeEaseFunction {
        UMeshComponent* Mesh; // 0x0
        FObjectFadeParamsEaseFunction Setup; // 0x8
        EObjectFadeCompletedAction FadeCompletedAction; // 0x1c
        char pad_1d[0x3];
        float TimeFactorOverride; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_MeshStartFadeEaseFunction params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.Setup = (FObjectFadeParamsEaseFunction)Setup;
    params.FadeCompletedAction = (EObjectFadeCompletedAction)FadeCompletedAction;
    params.TimeFactorOverride = (float)TimeFactorOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Setup = params.Setup;
    return (bool)params.ReturnValue;
}
bool AObjectFadeMaster::MeshStartFadeDirectCurve(UMeshComponent* Mesh, FObjectFadeParamsCurve& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.MeshStartFadeDirectCurve"));
    struct Params_MeshStartFadeDirectCurve {
        UMeshComponent* Mesh; // 0x0
        FObjectFadeParamsCurve Setup; // 0x8
        EObjectFadeCompletedAction FadeCompletedAction; // 0x98
        char pad_99[0x3];
        float TimeFactorOverride; // 0x9c
        bool ReturnValue; // 0xa0
    }; // Size: 0xa1
    Params_MeshStartFadeDirectCurve params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.Setup = (FObjectFadeParamsCurve)Setup;
    params.FadeCompletedAction = (EObjectFadeCompletedAction)FadeCompletedAction;
    params.TimeFactorOverride = (float)TimeFactorOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Setup = params.Setup;
    return (bool)params.ReturnValue;
}
void AObjectFadeMaster::MeshIsFadingOut(UMeshComponent* Mesh, bool& isFading, bool& isDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.MeshIsFadingOut"));
    struct Params_MeshIsFadingOut {
        UMeshComponent* Mesh; // 0x0
        bool isFading; // 0x8
        bool isDone; // 0x9
    }; // Size: 0xa
    Params_MeshIsFadingOut params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.isFading = (bool)isFading;
    params.isDone = (bool)isDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    isFading = params.isFading;
    isDone = params.isDone;
}
bool AObjectFadeMaster::MeshStartFade(UMeshComponent* Mesh, FObjectFadeParamsSpeedDuration& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.MeshStartFade"));
    struct Params_MeshStartFade {
        UMeshComponent* Mesh; // 0x0
        FObjectFadeParamsSpeedDuration Setup; // 0x8
        EObjectFadeCompletedAction FadeCompletedAction; // 0x14
        char pad_15[0x3];
        float TimeFactorOverride; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_MeshStartFade params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.Setup = (FObjectFadeParamsSpeedDuration)Setup;
    params.FadeCompletedAction = (EObjectFadeCompletedAction)FadeCompletedAction;
    params.TimeFactorOverride = (float)TimeFactorOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Setup = params.Setup;
    return (bool)params.ReturnValue;
}
void AObjectFadeMaster::MeshRemoveFade(UMeshComponent* Mesh, bool& wasFading) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.MeshRemoveFade"));
    struct Params_MeshRemoveFade {
        UMeshComponent* Mesh; // 0x0
        bool wasFading; // 0x8
    }; // Size: 0x9
    Params_MeshRemoveFade params{};
    params.Mesh = (UMeshComponent*)Mesh;
    params.wasFading = (bool)wasFading;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    wasFading = params.wasFading;
}
bool AObjectFadeMaster::ActorStartFadeEaseFunction(AActor* Actor, FObjectFadeParamsEaseFunction& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorStartFadeEaseFunction"));
    struct Params_ActorStartFadeEaseFunction {
        AActor* Actor; // 0x0
        FObjectFadeParamsEaseFunction Setup; // 0x8
        EObjectFadeCompletedAction FadeCompletedAction; // 0x1c
        char pad_1d[0x3];
        float TimeFactorOverride; // 0x20
        bool ReturnValue; // 0x24
    }; // Size: 0x25
    Params_ActorStartFadeEaseFunction params{};
    params.Actor = (AActor*)Actor;
    params.Setup = (FObjectFadeParamsEaseFunction)Setup;
    params.FadeCompletedAction = (EObjectFadeCompletedAction)FadeCompletedAction;
    params.TimeFactorOverride = (float)TimeFactorOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Setup = params.Setup;
    return (bool)params.ReturnValue;
}
bool AObjectFadeMaster::ActorStartFadeDirectCurve(AActor* Actor, FObjectFadeParamsCurve& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorStartFadeDirectCurve"));
    struct Params_ActorStartFadeDirectCurve {
        AActor* Actor; // 0x0
        FObjectFadeParamsCurve Setup; // 0x8
        EObjectFadeCompletedAction FadeCompletedAction; // 0x98
        char pad_99[0x3];
        float TimeFactorOverride; // 0x9c
        bool ReturnValue; // 0xa0
    }; // Size: 0xa1
    Params_ActorStartFadeDirectCurve params{};
    params.Actor = (AActor*)Actor;
    params.Setup = (FObjectFadeParamsCurve)Setup;
    params.FadeCompletedAction = (EObjectFadeCompletedAction)FadeCompletedAction;
    params.TimeFactorOverride = (float)TimeFactorOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Setup = params.Setup;
    return (bool)params.ReturnValue;
}
bool AObjectFadeMaster::ActorStartFade(AActor* Actor, FObjectFadeParamsSpeedDuration& Setup, EObjectFadeCompletedAction FadeCompletedAction, float TimeFactorOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorStartFade"));
    struct Params_ActorStartFade {
        AActor* Actor; // 0x0
        FObjectFadeParamsSpeedDuration Setup; // 0x8
        EObjectFadeCompletedAction FadeCompletedAction; // 0x14
        char pad_15[0x3];
        float TimeFactorOverride; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_ActorStartFade params{};
    params.Actor = (AActor*)Actor;
    params.Setup = (FObjectFadeParamsSpeedDuration)Setup;
    params.FadeCompletedAction = (EObjectFadeCompletedAction)FadeCompletedAction;
    params.TimeFactorOverride = (float)TimeFactorOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Setup = params.Setup;
    return (bool)params.ReturnValue;
}
void AObjectFadeMaster::ActorSetFadeInOut(AActor* Actor, EObjectFadeDirection Direction, EObjectFadeMasterState& FadeState, float Duration, EObjectFadeCompletedAction FadeInCompletedAction, EObjectFadeCompletedAction FadeOutCompletedAction, bool bFadeInIfNotInSystem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorSetFadeInOut"));
    struct Params_ActorSetFadeInOut {
        AActor* Actor; // 0x0
        EObjectFadeDirection Direction; // 0x8
        EObjectFadeMasterState FadeState; // 0x9
        char pad_a[0x2];
        float Duration; // 0xc
        EObjectFadeCompletedAction FadeInCompletedAction; // 0x10
        EObjectFadeCompletedAction FadeOutCompletedAction; // 0x11
        bool bFadeInIfNotInSystem; // 0x12
    }; // Size: 0x13
    Params_ActorSetFadeInOut params{};
    params.Actor = (AActor*)Actor;
    params.Direction = (EObjectFadeDirection)Direction;
    params.FadeState = (EObjectFadeMasterState)FadeState;
    params.Duration = (float)Duration;
    params.FadeInCompletedAction = (EObjectFadeCompletedAction)FadeInCompletedAction;
    params.FadeOutCompletedAction = (EObjectFadeCompletedAction)FadeOutCompletedAction;
    params.bFadeInIfNotInSystem = (bool)bFadeInIfNotInSystem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FadeState = params.FadeState;
}
void AObjectFadeMaster::ActorRemoveFade(AActor* Actor, bool& wasFading) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorRemoveFade"));
    struct Params_ActorRemoveFade {
        AActor* Actor; // 0x0
        bool wasFading; // 0x8
    }; // Size: 0x9
    Params_ActorRemoveFade params{};
    params.Actor = (AActor*)Actor;
    params.wasFading = (bool)wasFading;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    wasFading = params.wasFading;
}
void AObjectFadeMaster::ActorPingPongFade(AActor* Actor, EObjectFadeDirection Direction, EObjectFadeMasterState& FadeState, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorPingPongFade"));
    struct Params_ActorPingPongFade {
        AActor* Actor; // 0x0
        EObjectFadeDirection Direction; // 0x8
        EObjectFadeMasterState FadeState; // 0x9
        char pad_a[0x2];
        float Duration; // 0xc
    }; // Size: 0x10
    Params_ActorPingPongFade params{};
    params.Actor = (AActor*)Actor;
    params.Direction = (EObjectFadeDirection)Direction;
    params.FadeState = (EObjectFadeMasterState)FadeState;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FadeState = params.FadeState;
}
void AObjectFadeMaster::ActorIsFadingOut(AActor* Actor, bool& isFading, bool& isDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorIsFadingOut"));
    struct Params_ActorIsFadingOut {
        AActor* Actor; // 0x0
        bool isFading; // 0x8
        bool isDone; // 0x9
    }; // Size: 0xa
    Params_ActorIsFadingOut params{};
    params.Actor = (AActor*)Actor;
    params.isFading = (bool)isFading;
    params.isDone = (bool)isDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    isFading = params.isFading;
    isDone = params.isDone;
}
void AObjectFadeMaster::ActorIsFadingIn(AActor* Actor, bool& isFading, bool& isDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.ObjectFadeMaster.ActorIsFadingIn"));
    struct Params_ActorIsFadingIn {
        AActor* Actor; // 0x0
        bool isFading; // 0x8
        bool isDone; // 0x9
    }; // Size: 0xa
    Params_ActorIsFadingIn params{};
    params.Actor = (AActor*)Actor;
    params.isFading = (bool)isFading;
    params.isDone = (bool)isDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    isFading = params.isFading;
    isDone = params.isDone;
}

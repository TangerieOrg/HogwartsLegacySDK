#include "AActor.hpp"
#include "AConjurationPreviewEffect.hpp"
#include "EConjurationSpawnState.hpp"
#include "UFunction.hpp"
void AConjurationPreviewEffect::OnEndSpawnOutBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.OnEndSpawnOutBlueprint"));
    struct Params_OnEndSpawnOutBlueprint {
    }; // Size: 0x0
    Params_OnEndSpawnOutBlueprint params{};
    ProcessEvent(func, &params);
}
void AConjurationPreviewEffect::OnBeginSpawnedBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.OnBeginSpawnedBlueprint"));
    struct Params_OnBeginSpawnedBlueprint {
    }; // Size: 0x0
    Params_OnBeginSpawnedBlueprint params{};
    ProcessEvent(func, &params);
}
AConjurationPreviewEffect* AConjurationPreviewEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationPreviewEffect");
    return (AConjurationPreviewEffect*)res;
}
void AConjurationPreviewEffect::UpdateFXBlueprint(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.UpdateFXBlueprint"));
    struct Params_UpdateFXBlueprint {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_UpdateFXBlueprint params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
float AConjurationPreviewEffect::GetSpawnPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.GetSpawnPercent"));
    struct Params_GetSpawnPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpawnPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AConjurationPreviewEffect::OnEndSpawnInBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.OnEndSpawnInBlueprint"));
    struct Params_OnEndSpawnInBlueprint {
    }; // Size: 0x0
    Params_OnEndSpawnInBlueprint params{};
    ProcessEvent(func, &params);
}
void AConjurationPreviewEffect::OnEndSpawnedBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.OnEndSpawnedBlueprint"));
    struct Params_OnEndSpawnedBlueprint {
    }; // Size: 0x0
    Params_OnEndSpawnedBlueprint params{};
    ProcessEvent(func, &params);
}
void AConjurationPreviewEffect::OnBeginSpawnOutBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.OnBeginSpawnOutBlueprint"));
    struct Params_OnBeginSpawnOutBlueprint {
    }; // Size: 0x0
    Params_OnBeginSpawnOutBlueprint params{};
    ProcessEvent(func, &params);
}
void AConjurationPreviewEffect::OnBeginSpawnInBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.OnBeginSpawnInBlueprint"));
    struct Params_OnBeginSpawnInBlueprint {
    }; // Size: 0x0
    Params_OnBeginSpawnInBlueprint params{};
    ProcessEvent(func, &params);
}
void AConjurationPreviewEffect::InitializeBlueprint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationPreviewEffect.InitializeBlueprint"));
    struct Params_InitializeBlueprint {
    }; // Size: 0x0
    Params_InitializeBlueprint params{};
    ProcessEvent(func, &params);
}

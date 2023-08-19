#include "AActor.hpp"
#include "AInstancedFlockingActor.hpp"
#include "FFlockCollisionParameters.hpp"
#include "FFlockGenerationParameters.hpp"
#include "FFlockMemberInitialConditions.hpp"
#include "FFlockMemberInitialState.hpp"
#include "FFlockPersonalities.hpp"
#include "FFlockingFadeParameters.hpp"
#include "FFlockingParameters.hpp"
#include "FFlockingParametersAdjustable.hpp"
#include "FFlockingParametersAdjustableBlend.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
void AInstancedFlockingActor::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedFlockingActor.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void AInstancedFlockingActor::SetAdjustableParameters(FFlockingParametersAdjustable Parameters, float BlendTimeSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedFlockingActor.SetAdjustableParameters"));
    struct Params_SetAdjustableParameters {
        FFlockingParametersAdjustable Parameters; // 0x0
        float BlendTimeSeconds; // 0x5c
    }; // Size: 0x60
    Params_SetAdjustableParameters params{};
    params.Parameters = (FFlockingParametersAdjustable)Parameters;
    params.BlendTimeSeconds = (float)BlendTimeSeconds;
    ProcessEvent(func, &params);
}
AInstancedFlockingActor* AInstancedFlockingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InstancedFlockingActor");
    return (AInstancedFlockingActor*)res;
}
void AInstancedFlockingActor::Generate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedFlockingActor.Generate"));
    struct Params_Generate {
    }; // Size: 0x0
    Params_Generate params{};
    ProcessEvent(func, &params);
}
void AInstancedFlockingActor::StartFade() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedFlockingActor.StartFade"));
    struct Params_StartFade {
    }; // Size: 0x0
    Params_StartFade params{};
    ProcessEvent(func, &params);
}
void AInstancedFlockingActor::SetFlockingStrength(float Strength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedFlockingActor.SetFlockingStrength"));
    struct Params_SetFlockingStrength {
        float Strength; // 0x0
    }; // Size: 0x4
    Params_SetFlockingStrength params{};
    params.Strength = (float)Strength;
    ProcessEvent(func, &params);
}
void AInstancedFlockingActor::GetAdjustableParameters(FFlockingParametersAdjustable& Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InstancedFlockingActor.GetAdjustableParameters"));
    struct Params_GetAdjustableParameters {
        FFlockingParametersAdjustable Parameters; // 0x0
    }; // Size: 0x5c
    Params_GetAdjustableParameters params{};
    params.Parameters = (FFlockingParametersAdjustable)Parameters;
    ProcessEvent(func, &params);
    Parameters = params.Parameters;
}

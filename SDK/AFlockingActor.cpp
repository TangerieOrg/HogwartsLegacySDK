#include "AActor.hpp"
#include "AFlockingActor.hpp"
#include "FFlockCollisionParameters.hpp"
#include "FFlockMemberInitialState.hpp"
#include "FFlockPersonalities.hpp"
#include "FFlockingParameters.hpp"
#include "FFlockingParametersAdjustable.hpp"
#include "FFlockingParametersAdjustableBlend.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UParticleSystemComponent.hpp"
#include "UStaticMeshComponent.hpp"
void AFlockingActor::SetFlockingStrength(float Strength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlockingActor.SetFlockingStrength"));
    struct Params_SetFlockingStrength {
        float Strength; // 0x0
    }; // Size: 0x4
    Params_SetFlockingStrength params{};
    params.Strength = (float)Strength;
    ProcessEvent(func, &params);
}
AFlockingActor* AFlockingActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlockingActor");
    return (AFlockingActor*)res;
}
void AFlockingActor::SetAdjustableParameters(FFlockingParametersAdjustable Parameters, float BlendTimeSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlockingActor.SetAdjustableParameters"));
    struct Params_SetAdjustableParameters {
        FFlockingParametersAdjustable Parameters; // 0x0
        float BlendTimeSeconds; // 0x5c
    }; // Size: 0x60
    Params_SetAdjustableParameters params{};
    params.Parameters = (FFlockingParametersAdjustable)Parameters;
    params.BlendTimeSeconds = (float)BlendTimeSeconds;
    ProcessEvent(func, &params);
}
FFlockingParametersAdjustable AFlockingActor::LerpFlockingParameters(FFlockingParametersAdjustable A, FFlockingParametersAdjustable B, float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlockingActor.LerpFlockingParameters"));
    struct Params_LerpFlockingParameters {
        FFlockingParametersAdjustable A; // 0x0
        FFlockingParametersAdjustable B; // 0x5c
        float Alpha; // 0xb8
        FFlockingParametersAdjustable ReturnValue; // 0xbc
    }; // Size: 0x118
    Params_LerpFlockingParameters params{};
    params.A = (FFlockingParametersAdjustable)A;
    params.B = (FFlockingParametersAdjustable)B;
    params.Alpha = (float)Alpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFlockingParametersAdjustable)params.ReturnValue;
}
void AFlockingActor::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlockingActor.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void AFlockingActor::GetAdjustableParameters(FFlockingParametersAdjustable& Parameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlockingActor.GetAdjustableParameters"));
    struct Params_GetAdjustableParameters {
        FFlockingParametersAdjustable Parameters; // 0x0
    }; // Size: 0x5c
    Params_GetAdjustableParameters params{};
    params.Parameters = (FFlockingParametersAdjustable)Parameters;
    ProcessEvent(func, &params);
    Parameters = params.Parameters;
}
void AFlockingActor::Generate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlockingActor.Generate"));
    struct Params_Generate {
    }; // Size: 0x0
    Params_Generate params{};
    ProcessEvent(func, &params);
}

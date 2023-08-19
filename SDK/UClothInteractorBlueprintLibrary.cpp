#include "FBoolClothInteractorValue.hpp"
#include "FFloatClothInteractorValue.hpp"
#include "FIntClothInteractorValue.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector2DClothInteractorValue.hpp"
#include "FVectorClothInteractorValue.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UChaosClothConfig.hpp"
#include "UChaosClothSharedSimConfig.hpp"
#include "UChaosClothingInteractor.hpp"
#include "UClothInteractorBlueprintLibrary.hpp"
#include "UFunction.hpp"
#include "USkeletalMesh.hpp"
UChaosClothConfig* UClothInteractorBlueprintLibrary::GetChaosClothConfig(USkeletalMesh* SkeletalMesh, UChaosClothingInteractor* ChaosClothingInteractor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.GetChaosClothConfig"));
    struct Params_GetChaosClothConfig {
        USkeletalMesh* SkeletalMesh; // 0x0
        UChaosClothingInteractor* ChaosClothingInteractor; // 0x8
        UChaosClothConfig* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetChaosClothConfig params{};
    params.SkeletalMesh = (USkeletalMesh*)SkeletalMesh;
    params.ChaosClothingInteractor = (UChaosClothingInteractor*)ChaosClothingInteractor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UChaosClothConfig*)params.ReturnValue;
}
UClothInteractorBlueprintLibrary* UClothInteractorBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ClothInteractorBlueprintLibrary");
    return (UClothInteractorBlueprintLibrary*)res;
}
UChaosClothSharedSimConfig* UClothInteractorBlueprintLibrary::GetChaosClothSharedSimConfig(USkeletalMesh* SkeletalMesh, UChaosClothingInteractor* ChaosClothingInteractor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.GetChaosClothSharedSimConfig"));
    struct Params_GetChaosClothSharedSimConfig {
        USkeletalMesh* SkeletalMesh; // 0x0
        UChaosClothingInteractor* ChaosClothingInteractor; // 0x8
        UChaosClothSharedSimConfig* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetChaosClothSharedSimConfig params{};
    params.SkeletalMesh = (USkeletalMesh*)SkeletalMesh;
    params.ChaosClothingInteractor = (UChaosClothingInteractor*)ChaosClothingInteractor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UChaosClothSharedSimConfig*)params.ReturnValue;
}
float UClothInteractorBlueprintLibrary::EvaluateFloatClothInteractorValue(FFloatClothInteractorValue& ClothInteractorValue, float& DefaultValue, float BlendAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.EvaluateFloatClothInteractorValue"));
    struct Params_EvaluateFloatClothInteractorValue {
        FFloatClothInteractorValue ClothInteractorValue; // 0x0
        float DefaultValue; // 0x8
        float BlendAlpha; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_EvaluateFloatClothInteractorValue params{};
    params.ClothInteractorValue = (FFloatClothInteractorValue)ClothInteractorValue;
    params.DefaultValue = (float)DefaultValue;
    params.BlendAlpha = (float)BlendAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ClothInteractorValue = params.ClothInteractorValue;
    DefaultValue = params.DefaultValue;
    return (float)params.ReturnValue;
}
FVector UClothInteractorBlueprintLibrary::EvaluateVectorClothInteractorValue(FVectorClothInteractorValue& ClothInteractorValue, FVector& DefaultValue, float BlendAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.EvaluateVectorClothInteractorValue"));
    struct Params_EvaluateVectorClothInteractorValue {
        FVectorClothInteractorValue ClothInteractorValue; // 0x0
        FVector DefaultValue; // 0x10
        float BlendAlpha; // 0x1c
        FVector ReturnValue; // 0x20
    }; // Size: 0x2c
    Params_EvaluateVectorClothInteractorValue params{};
    params.ClothInteractorValue = (FVectorClothInteractorValue)ClothInteractorValue;
    params.DefaultValue = (FVector)DefaultValue;
    params.BlendAlpha = (float)BlendAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ClothInteractorValue = params.ClothInteractorValue;
    DefaultValue = params.DefaultValue;
    return (FVector)params.ReturnValue;
}
bool UClothInteractorBlueprintLibrary::EvaluateBoolClothInteractorValue(FBoolClothInteractorValue& ClothInteractorValue, bool& DefaultValue, float BlendAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.EvaluateBoolClothInteractorValue"));
    struct Params_EvaluateBoolClothInteractorValue {
        FBoolClothInteractorValue ClothInteractorValue; // 0x0
        bool DefaultValue; // 0x2
        char pad_3[0x1];
        float BlendAlpha; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EvaluateBoolClothInteractorValue params{};
    params.ClothInteractorValue = (FBoolClothInteractorValue)ClothInteractorValue;
    params.DefaultValue = (bool)DefaultValue;
    params.BlendAlpha = (float)BlendAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ClothInteractorValue = params.ClothInteractorValue;
    DefaultValue = params.DefaultValue;
    return (bool)params.ReturnValue;
}
int32_t UClothInteractorBlueprintLibrary::EvaluateIntClothInteractorValue(FIntClothInteractorValue& ClothInteractorValue, int32_t& DefaultValue, float BlendAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.EvaluateIntClothInteractorValue"));
    struct Params_EvaluateIntClothInteractorValue {
        FIntClothInteractorValue ClothInteractorValue; // 0x0
        int32_t DefaultValue; // 0x8
        float BlendAlpha; // 0xc
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_EvaluateIntClothInteractorValue params{};
    params.ClothInteractorValue = (FIntClothInteractorValue)ClothInteractorValue;
    params.DefaultValue = (int32_t)DefaultValue;
    params.BlendAlpha = (float)BlendAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DefaultValue = params.DefaultValue;
    ClothInteractorValue = params.ClothInteractorValue;
    return (int32_t)params.ReturnValue;
}
FVector2D UClothInteractorBlueprintLibrary::EvaluateVector2DClothInteractorValue(FVector2DClothInteractorValue& ClothInteractorValue, FVector2D& DefaultValue, float BlendAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ClothInteractorBlueprintLibrary.EvaluateVector2DClothInteractorValue"));
    struct Params_EvaluateVector2DClothInteractorValue {
        FVector2DClothInteractorValue ClothInteractorValue; // 0x0
        FVector2D DefaultValue; // 0xc
        float BlendAlpha; // 0x14
        FVector2D ReturnValue; // 0x18
    }; // Size: 0x20
    Params_EvaluateVector2DClothInteractorValue params{};
    params.ClothInteractorValue = (FVector2DClothInteractorValue)ClothInteractorValue;
    params.DefaultValue = (FVector2D)DefaultValue;
    params.BlendAlpha = (float)BlendAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ClothInteractorValue = params.ClothInteractorValue;
    DefaultValue = params.DefaultValue;
    return (FVector2D)params.ReturnValue;
}

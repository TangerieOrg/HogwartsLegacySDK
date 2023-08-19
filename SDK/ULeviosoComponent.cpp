#include "AActor.hpp"
#include "AMunitionType_Base.hpp"
#include "FLeviosoData.hpp"
#include "UCurveFloat.hpp"
#include "UCurveVector.hpp"
#include "UFunction.hpp"
#include "ULeviosoComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStateEffectComponent.hpp"
void ULeviosoComponent::SetData(FLeviosoData InData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LeviosoComponent.SetData"));
    struct Params_SetData {
        FLeviosoData InData; // 0x0
    }; // Size: 0x90
    Params_SetData params{};
    params.InData = (FLeviosoData)InData;
    ProcessEvent(func, &params);
}
void ULeviosoComponent::SetFloorHeight(float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LeviosoComponent.SetFloorHeight"));
    struct Params_SetFloorHeight {
        float Height; // 0x0
    }; // Size: 0x4
    Params_SetFloorHeight params{};
    params.Height = (float)Height;
    ProcessEvent(func, &params);
}
ULeviosoComponent* ULeviosoComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LeviosoComponent");
    return (ULeviosoComponent*)res;
}
void ULeviosoComponent::SetIgnoreActors(TArray<AActor*> i_Ingores) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LeviosoComponent.SetIgnoreActors"));
    struct Params_SetIgnoreActors {
        TArray<AActor*> i_Ingores; // 0x0
    }; // Size: 0x10
    Params_SetIgnoreActors params{};
    params.i_Ingores = (TArray<AActor*>)i_Ingores;
    ProcessEvent(func, &params);
}

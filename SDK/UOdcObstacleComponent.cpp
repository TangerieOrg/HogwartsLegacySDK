#include "FOdcObstacleData.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UOdcObstacleComponent.hpp"
#include "USceneComponent.hpp"
UOdcObstacleComponent* UOdcObstacleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcObstacleComponent");
    return (UOdcObstacleComponent*)res;
}
void UOdcObstacleComponent::SetFlag(FName FlagName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.OdcObstacleComponent.SetFlag"));
    struct Params_SetFlag {
        FName FlagName; // 0x0
    }; // Size: 0x8
    Params_SetFlag params{};
    params.FlagName = (FName)FlagName;
    ProcessEvent(func, &params);
}
void UOdcObstacleComponent::ClearFlag(FName FlagName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.OdcObstacleComponent.ClearFlag"));
    struct Params_ClearFlag {
        FName FlagName; // 0x0
    }; // Size: 0x8
    Params_ClearFlag params{};
    params.FlagName = (FName)FlagName;
    ProcessEvent(func, &params);
}
void UOdcObstacleComponent::AddComponentObstaclesBP(TArray<UActorComponent*> IncludeComponents, bool RemoveUnknownObstacles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.OdcObstacleComponent.AddComponentObstaclesBP"));
    struct Params_AddComponentObstaclesBP {
        TArray<UActorComponent*> IncludeComponents; // 0x0
        bool RemoveUnknownObstacles; // 0x10
    }; // Size: 0x11
    Params_AddComponentObstaclesBP params{};
    params.IncludeComponents = (TArray<UActorComponent*>)IncludeComponents;
    params.RemoveUnknownObstacles = (bool)RemoveUnknownObstacles;
    ProcessEvent(func, &params);
}
void UOdcObstacleComponent::AddActorComponentObstaclesBP(bool RemoveUnknownObstacles, TArray<UActorComponent*> ExcludeComponents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OdysseyRuntime.OdcObstacleComponent.AddActorComponentObstaclesBP"));
    struct Params_AddActorComponentObstaclesBP {
        bool RemoveUnknownObstacles; // 0x0
        char pad_1[0x7];
        TArray<UActorComponent*> ExcludeComponents; // 0x8
    }; // Size: 0x18
    Params_AddActorComponentObstaclesBP params{};
    params.RemoveUnknownObstacles = (bool)RemoveUnknownObstacles;
    params.ExcludeComponents = (TArray<UActorComponent*>)ExcludeComponents;
    ProcessEvent(func, &params);
}

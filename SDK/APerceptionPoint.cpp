#include "APawn.hpp"
#include "APerceptionPoint.hpp"
#include "APerceptionPointArea.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAISenseConfig.hpp"
#include "UFunction.hpp"
APerceptionPoint* APerceptionPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionPoint");
    return (APerceptionPoint*)res;
}
void APerceptionPoint::Enable(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPoint.Enable"));
    struct Params_Enable {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_Enable params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void APerceptionPoint::EnablePerception(bool bEnable, TArray<APerceptionPoint*> PerceptionPointList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPoint.EnablePerception"));
    struct Params_EnablePerception {
        bool bEnable; // 0x0
        char pad_1[0x7];
        TArray<APerceptionPoint*> PerceptionPointList; // 0x8
    }; // Size: 0x18
    Params_EnablePerception params{};
    params.bEnable = (bool)bEnable;
    params.PerceptionPointList = (TArray<APerceptionPoint*>)PerceptionPointList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void APerceptionPoint::AttackDistanceScaleVolume(float InScale, TArray<APerceptionPointArea*> InAreaList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPoint.AttackDistanceScaleVolume"));
    struct Params_AttackDistanceScaleVolume {
        float InScale; // 0x0
        char pad_4[0x4];
        TArray<APerceptionPointArea*> InAreaList; // 0x8
    }; // Size: 0x18
    Params_AttackDistanceScaleVolume params{};
    params.InScale = (float)InScale;
    params.InAreaList = (TArray<APerceptionPointArea*>)InAreaList;
    ProcessEvent(func, &params);
}

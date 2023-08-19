#include "AController.hpp"
#include "ECalloutActions.hpp"
#include "ECalloutBlipType.hpp"
#include "ECalloutType.hpp"
#include "ESocialCombatMode.hpp"
#include "FCalloutInformation.hpp"
#include "FSlateColor.hpp"
#include "FVector.hpp"
#include "UAIPerceptionStimuliSourceComponent.hpp"
#include "UAISenseFOVDetails.hpp"
#include "UAISenseSpecificDetails.hpp"
#include "UClass.hpp"
#include "UCogGroupEvaluation.hpp"
#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupTargetPoint.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UFunction.hpp"
UCognitionStimuliSourceComponent* UCognitionStimuliSourceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CognitionStimuliSourceComponent");
    return (UCognitionStimuliSourceComponent*)res;
}
UAISenseSpecificDetails* UCognitionStimuliSourceComponent::GetSenseSpecificDetails(UClass* InSense) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.GetSenseSpecificDetails"));
    struct Params_GetSenseSpecificDetails {
        UClass* InSense; // 0x0
        UAISenseSpecificDetails* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSenseSpecificDetails params{};
    params.InSense = (UClass*)InSense;
    ProcessEvent(func, &params);
    return (UAISenseSpecificDetails*)params.ReturnValue;
}
void UCognitionStimuliSourceComponent::SetPriorityWeight(float weight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.SetPriorityWeight"));
    struct Params_SetPriorityWeight {
        float weight; // 0x0
    }; // Size: 0x4
    Params_SetPriorityWeight params{};
    params.weight = (float)weight;
    ProcessEvent(func, &params);
}
void UCognitionStimuliSourceComponent::ChangeInformation(FCalloutInformation& NewInformation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.ChangeInformation"));
    struct Params_ChangeInformation {
        FCalloutInformation NewInformation; // 0x0
    }; // Size: 0x58
    Params_ChangeInformation params{};
    params.NewInformation = (FCalloutInformation)NewInformation;
    ProcessEvent(func, &params);
    NewInformation = params.NewInformation;
}
void UCognitionStimuliSourceComponent::SetIgnoreLineOfSight(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.SetIgnoreLineOfSight"));
    struct Params_SetIgnoreLineOfSight {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreLineOfSight params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UCognitionStimuliSourceComponent::SetFootprintRadius(float Radius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.SetFootprintRadius"));
    struct Params_SetFootprintRadius {
        float Radius; // 0x0
    }; // Size: 0x4
    Params_SetFootprintRadius params{};
    params.Radius = (float)Radius;
    ProcessEvent(func, &params);
}
float UCognitionStimuliSourceComponent::GetPriorityWeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.GetPriorityWeight"));
    struct Params_GetPriorityWeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPriorityWeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCognitionStimuliSourceComponent::SetAutoRegisterAsSource(bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.SetAutoRegisterAsSource"));
    struct Params_SetAutoRegisterAsSource {
        bool bFlag; // 0x0
    }; // Size: 0x1
    Params_SetAutoRegisterAsSource params{};
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
bool UCognitionStimuliSourceComponent::IsRegisteredForSense(UClass* SenseToFind) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.IsRegisteredForSense"));
    struct Params_IsRegisteredForSense {
        UClass* SenseToFind; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRegisteredForSense params{};
    params.SenseToFind = (UClass*)SenseToFind;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCognitionStimuliSourceComponent::IsOwned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.IsOwned"));
    struct Params_IsOwned {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOwned params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCognitionStimuliSourceComponent::GetIgnoreLineOfSight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.GetIgnoreLineOfSight"));
    struct Params_GetIgnoreLineOfSight {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIgnoreLineOfSight params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UCognitionStimuliSourceComponent::GetFootprintRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.GetFootprintRadius"));
    struct Params_GetFootprintRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFootprintRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UCognitionStimuliSourceComponent::GetAutoRegisterAsSource() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.GetAutoRegisterAsSource"));
    struct Params_GetAutoRegisterAsSource {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAutoRegisterAsSource params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UCognitionStimuliSourceComponent::CalculateRadiusNeededToBePerceivedBy(float DistanceFromPerceiver, AController* PerceiverController, UClass* SenseToUse, bool bIncludePerceiverRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.CalculateRadiusNeededToBePerceivedBy"));
    struct Params_CalculateRadiusNeededToBePerceivedBy {
        float DistanceFromPerceiver; // 0x0
        char pad_4[0x4];
        AController* PerceiverController; // 0x8
        UClass* SenseToUse; // 0x10
        bool bIncludePerceiverRadius; // 0x18
        char pad_19[0x3];
        float ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_CalculateRadiusNeededToBePerceivedBy params{};
    params.DistanceFromPerceiver = (float)DistanceFromPerceiver;
    params.PerceiverController = (AController*)PerceiverController;
    params.SenseToUse = (UClass*)SenseToUse;
    params.bIncludePerceiverRadius = (bool)bIncludePerceiverRadius;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UCognitionStimuliSourceComponent::AddRegisterAsSourceForSenses(UClass*& Sense) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionStimuliSourceComponent.AddRegisterAsSourceForSenses"));
    struct Params_AddRegisterAsSourceForSenses {
        UClass* Sense; // 0x0
    }; // Size: 0x8
    Params_AddRegisterAsSourceForSenses params{};
    params.Sense = (UClass*)Sense;
    ProcessEvent(func, &params);
    Sense = params.Sense;
}

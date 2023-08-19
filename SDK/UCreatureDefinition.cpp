#include "FTimespan.hpp"
#include "UCreatureDefinition.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
int32_t UCreatureDefinition::GetCompletedYearForCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetCompletedYearForCapture"));
    struct Params_GetCompletedYearForCapture {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCompletedYearForCapture params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreatureDefinition::IsEgg() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.IsEgg"));
    struct Params_IsEgg {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEgg params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UCreatureDefinition::GetChildhoodDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetChildhoodDuration"));
    struct Params_GetChildhoodDuration {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetChildhoodDuration params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
bool UCreatureDefinition::IsOffspring() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.IsOffspring"));
    struct Params_IsOffspring {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOffspring params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCreatureDefinition* UCreatureDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureDefinition");
    return (UCreatureDefinition*)res;
}
bool UCreatureDefinition::IsEggLaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.IsEggLaying"));
    struct Params_IsEggLaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEggLaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureDefinition::IsAdult() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.IsAdult"));
    struct Params_IsAdult {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAdult params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UCreatureDefinition::GetPregnancyDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetPregnancyDuration"));
    struct Params_GetPregnancyDuration {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPregnancyDuration params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FName UCreatureDefinition::GetTypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetTypeID"));
    struct Params_GetTypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UCreatureDefinition::GetPreferredToyID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetPreferredToyID"));
    struct Params_GetPreferredToyID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPreferredToyID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UCreatureDefinition::GetPlayWithToyHappinessPercentage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetPlayWithToyHappinessPercentage"));
    struct Params_GetPlayWithToyHappinessPercentage {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayWithToyHappinessPercentage params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UCreatureDefinition::GetOnlyCapturableWhenNearDeathKneeling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetOnlyCapturableWhenNearDeathKneeling"));
    struct Params_GetOnlyCapturableWhenNearDeathKneeling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetOnlyCapturableWhenNearDeathKneeling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCreatureDefinition::GetOffspringCreatureTypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetOffspringCreatureTypeID"));
    struct Params_GetOffspringCreatureTypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOffspringCreatureTypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UCreatureDefinition::GetNumCapturingGates() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetNumCapturingGates"));
    struct Params_GetNumCapturingGates {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumCapturingGates params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreatureDefinition::GetIsCarnivore() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetIsCarnivore"));
    struct Params_GetIsCarnivore {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsCarnivore params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreatureDefinition::GetIsAggressive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetIsAggressive"));
    struct Params_GetIsAggressive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsAggressive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UCreatureDefinition::GetHatchingDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetHatchingDuration"));
    struct Params_GetHatchingDuration {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHatchingDuration params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FName UCreatureDefinition::GetEggTypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetEggTypeID"));
    struct Params_GetEggTypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEggTypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<FName> UCreatureDefinition::GetConflictTypeIDs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetConflictTypeIDs"));
    struct Params_GetConflictTypeIDs {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetConflictTypeIDs params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
float UCreatureDefinition::GetCapturingTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetCapturingTime"));
    struct Params_GetCapturingTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCapturingTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UCreatureDefinition::GetCapturingDistanceMax() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetCapturingDistanceMax"));
    struct Params_GetCapturingDistanceMax {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCapturingDistanceMax params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreatureDefinition::GetCanBeCaptured() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetCanBeCaptured"));
    struct Params_GetCanBeCaptured {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCanBeCaptured params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCreatureDefinition::GetByproductID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetByproductID"));
    struct Params_GetByproductID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetByproductID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UCreatureDefinition::GetByproductHarvestCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetByproductHarvestCount"));
    struct Params_GetByproductHarvestCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetByproductHarvestCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UCreatureDefinition::GetByproductCooldownTimeSec() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetByproductCooldownTimeSec"));
    struct Params_GetByproductCooldownTimeSec {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetByproductCooldownTimeSec params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UCreatureDefinition::GetBaseEconomyValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetBaseEconomyValue"));
    struct Params_GetBaseEconomyValue {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBaseEconomyValue params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName UCreatureDefinition::GetAdultCreatureTypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetAdultCreatureTypeID"));
    struct Params_GetAdultCreatureTypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAdultCreatureTypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UCreatureDefinition::GetAchievementForCapturing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureDefinition.GetAchievementForCapturing"));
    struct Params_GetAchievementForCapturing {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAchievementForCapturing params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

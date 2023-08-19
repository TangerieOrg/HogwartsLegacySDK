#include "AHerbPlot.hpp"
#include "EHerbGrowthState.hpp"
#include "FTimespan.hpp"
#include "UFunction.hpp"
#include "UHerbPlotState.hpp"
#include "UObject.hpp"
FName UHerbPlotState::GetPlotID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetPlotID"));
    struct Params_GetPlotID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlotID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FTimespan UHerbPlotState::GetGrowthTimeRemaining() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetGrowthTimeRemaining"));
    struct Params_GetGrowthTimeRemaining {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGrowthTimeRemaining params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
UHerbPlotState* UHerbPlotState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HerbPlotState");
    return (UHerbPlotState*)res;
}
bool UHerbPlotState::IsGrowing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.IsGrowing"));
    struct Params_IsGrowing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGrowing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UHerbPlotState::GetYield() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetYield"));
    struct Params_GetYield {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetYield params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UHerbPlotState::GetRegrowthTimeRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetRegrowthTimeRatio"));
    struct Params_GetRegrowthTimeRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRegrowthTimeRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UHerbPlotState::GetPlantID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetPlantID"));
    struct Params_GetPlantID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlantID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UHerbPlotState::GetIsInSanctuary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetIsInSanctuary"));
    struct Params_GetIsInSanctuary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInSanctuary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EHerbGrowthState UHerbPlotState::GetGrowthState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetGrowthState"));
    struct Params_GetGrowthState {
        EHerbGrowthState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetGrowthState params{};
    ProcessEvent(func, &params);
    return (EHerbGrowthState)params.ReturnValue;
}
float UHerbPlotState::GetGrowthProgressRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetGrowthProgressRatio"));
    struct Params_GetGrowthProgressRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGrowthProgressRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UHerbPlotState::GetFertilizerID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HerbPlotState.GetFertilizerID"));
    struct Params_GetFertilizerID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFertilizerID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

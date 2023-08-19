#include "EWindSourceCombine.hpp"
#include "UFunction.hpp"
#include "UWindGustController.hpp"
#include "UWindSourceComponentBase.hpp"
#include "UWindSourceComponentBaseData.hpp"
UWindSourceComponentBaseData* UWindSourceComponentBaseData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindSourceComponentBaseData");
    return (UWindSourceComponentBaseData*)res;
}
void UWindSourceComponentBaseData::SetWindGustController(UWindGustController* InWindGustController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindSourceComponentBaseData.SetWindGustController"));
    struct Params_SetWindGustController {
        UWindGustController* InWindGustController; // 0x0
    }; // Size: 0x8
    Params_SetWindGustController params{};
    params.InWindGustController = (UWindGustController*)InWindGustController;
    ProcessEvent(func, &params);
}
void UWindSourceComponentBaseData::SetSourceCombine(EWindSourceCombine InNewSourceCombine) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindSourceComponentBaseData.SetSourceCombine"));
    struct Params_SetSourceCombine {
        EWindSourceCombine InNewSourceCombine; // 0x0
    }; // Size: 0x1
    Params_SetSourceCombine params{};
    params.InNewSourceCombine = (EWindSourceCombine)InNewSourceCombine;
    ProcessEvent(func, &params);
}
void UWindSourceComponentBaseData::SetPriority(float InNewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindSourceComponentBaseData.SetPriority"));
    struct Params_SetPriority {
        float InNewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.InNewPriority = (float)InNewPriority;
    ProcessEvent(func, &params);
}
void UWindSourceComponentBaseData::SetOutdoors(float InNewOutdoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindSourceComponentBaseData.SetOutdoors"));
    struct Params_SetOutdoors {
        float InNewOutdoors; // 0x0
    }; // Size: 0x4
    Params_SetOutdoors params{};
    params.InNewOutdoors = (float)InNewOutdoors;
    ProcessEvent(func, &params);
}

#include "AAIPath.hpp"
#include "AActor.hpp"
#include "FBranchTagCommand.hpp"
#include "FPathScheduleData.hpp"
#include "FStationTagCommand.hpp"
#include "UFunction.hpp"
#include "UPathComponent.hpp"
AAIPath* AAIPath::StaticClass() {
    static auto res = find_uobject("Class /Script/AIPathScheduler.AIPath");
    return (AAIPath*)res;
}
void AAIPath::EnableApparate(bool InEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIPathScheduler.AIPath.EnableApparate"));
    struct Params_EnableApparate {
        bool InEnable; // 0x0
    }; // Size: 0x1
    Params_EnableApparate params{};
    params.InEnable = (bool)InEnable;
    ProcessEvent(func, &params);
}
void AAIPath::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIPathScheduler.AIPath.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
void AAIPath::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIPathScheduler.AIPath.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}

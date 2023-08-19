#include "AActor.hpp"
#include "AChaosSolverActor.hpp"
#include "EClusterConnectionTypeEnum.hpp"
#include "FChaosDebugSubstepControl.hpp"
#include "FChaosSolverConfiguration.hpp"
#include "FSolverBreakingFilterSettings.hpp"
#include "FSolverCollisionFilterSettings.hpp"
#include "FSolverTrailingFilterSettings.hpp"
#include "UBillboardComponent.hpp"
#include "UChaosGameplayEventDispatcher.hpp"
#include "UFunction.hpp"
AChaosSolverActor* AChaosSolverActor::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosSolverEngine.ChaosSolverActor");
    return (AChaosSolverActor*)res;
}
void AChaosSolverActor::SetAsCurrentWorldSolver() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver"));
    struct Params_SetAsCurrentWorldSolver {
    }; // Size: 0x0
    Params_SetAsCurrentWorldSolver params{};
    ProcessEvent(func, &params);
}
void AChaosSolverActor::SetSolverActive(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive"));
    struct Params_SetSolverActive {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetSolverActive params{};
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}

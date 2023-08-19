#include "UCinematicBatch.hpp"
#include "UCinematicBatchHUD.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlaySceneRigCinematic.hpp"
UPlaySceneRigCinematic* UPlaySceneRigCinematic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlaySceneRigCinematic");
    return (UPlaySceneRigCinematic*)res;
}
void UPlaySceneRigCinematic::PlayAllCinematicBatchJobs(TArray<FString> InCinematicBatchPaths) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlaySceneRigCinematic.PlayAllCinematicBatchJobs"));
    struct Params_PlayAllCinematicBatchJobs {
        TArray<FString> InCinematicBatchPaths; // 0x0
    }; // Size: 0x10
    Params_PlayAllCinematicBatchJobs params{};
    params.InCinematicBatchPaths = (TArray<FString>)InCinematicBatchPaths;
    ProcessEvent(func, &params);
}

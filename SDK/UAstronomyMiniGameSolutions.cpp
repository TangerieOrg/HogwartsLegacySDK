#include "AActor.hpp"
#include "FAstronomyMiniGameSolutionEntry.hpp"
#include "FAstronomyMiniGameSolveState.hpp"
#include "UAstronomyMiniGameSolutions.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
UAstronomyMiniGameSolutions* UAstronomyMiniGameSolutions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AstronomyMiniGameSolutions");
    return (UAstronomyMiniGameSolutions*)res;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameSolved(bool& bIsSolved) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameSolved"));
    struct Params_GetAstronomyMiniGameSolved {
        bool bIsSolved; // 0x0
    }; // Size: 0x1
    Params_GetAstronomyMiniGameSolved params{};
    params.bIsSolved = (bool)bIsSolved;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsSolved = params.bIsSolved;
}
void UAstronomyMiniGameSolutions::UpdateAstronomyMiniGameSolvedLerp(AActor* Actor, FAstronomyMiniGameSolveState SolveState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.UpdateAstronomyMiniGameSolvedLerp"));
    struct Params_UpdateAstronomyMiniGameSolvedLerp {
        AActor* Actor; // 0x0
        FAstronomyMiniGameSolveState SolveState; // 0x8
    }; // Size: 0x18
    Params_UpdateAstronomyMiniGameSolvedLerp params{};
    params.Actor = (AActor*)Actor;
    params.SolveState = (FAstronomyMiniGameSolveState)SolveState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAstronomyMiniGameSolutions::UpdateAstronomyMiniGameSolve(AActor* Actor, FAstronomyMiniGameSolveState SolveState, bool& bIsSolved) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.UpdateAstronomyMiniGameSolve"));
    struct Params_UpdateAstronomyMiniGameSolve {
        AActor* Actor; // 0x0
        FAstronomyMiniGameSolveState SolveState; // 0x8
        bool bIsSolved; // 0x18
    }; // Size: 0x19
    Params_UpdateAstronomyMiniGameSolve params{};
    params.Actor = (AActor*)Actor;
    params.SolveState = (FAstronomyMiniGameSolveState)SolveState;
    params.bIsSolved = (bool)bIsSolved;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsSolved = params.bIsSolved;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameIsRunning(bool& bIsRunning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameIsRunning"));
    struct Params_GetAstronomyMiniGameIsRunning {
        bool bIsRunning; // 0x0
    }; // Size: 0x1
    Params_GetAstronomyMiniGameIsRunning params{};
    params.bIsRunning = (bool)bIsRunning;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsRunning = params.bIsRunning;
}
void UAstronomyMiniGameSolutions::SetupAstronomyMiniGameSolve(AActor* Actor, FName PointOfInterest, FAstronomyMiniGameSolutionEntry& Solution, FAstronomyMiniGameSolveState SolveState, FString Extra) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.SetupAstronomyMiniGameSolve"));
    struct Params_SetupAstronomyMiniGameSolve {
        AActor* Actor; // 0x0
        FName PointOfInterest; // 0x8
        FAstronomyMiniGameSolutionEntry Solution; // 0x10
        FAstronomyMiniGameSolveState SolveState; // 0x40
        FString Extra; // 0x50
    }; // Size: 0x60
    Params_SetupAstronomyMiniGameSolve params{};
    params.Actor = (AActor*)Actor;
    params.PointOfInterest = (FName)PointOfInterest;
    params.Solution = (FAstronomyMiniGameSolutionEntry)Solution;
    params.SolveState = (FAstronomyMiniGameSolveState)SolveState;
    params.Extra = (FString)Extra;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Solution = params.Solution;
}
void UAstronomyMiniGameSolutions::SetAstronomyMiniGameDone(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.SetAstronomyMiniGameDone"));
    struct Params_SetAstronomyMiniGameDone {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_SetAstronomyMiniGameDone params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameSolution(UDataTable* SolutionTable, FName PointOfInterest, FAstronomyMiniGameSolutionEntry& Solution, bool& bValidSolution) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameSolution"));
    struct Params_GetAstronomyMiniGameSolution {
        UDataTable* SolutionTable; // 0x0
        FName PointOfInterest; // 0x8
        FAstronomyMiniGameSolutionEntry Solution; // 0x10
        bool bValidSolution; // 0x40
    }; // Size: 0x41
    Params_GetAstronomyMiniGameSolution params{};
    params.SolutionTable = (UDataTable*)SolutionTable;
    params.PointOfInterest = (FName)PointOfInterest;
    params.Solution = (FAstronomyMiniGameSolutionEntry)Solution;
    params.bValidSolution = (bool)bValidSolution;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Solution = params.Solution;
    bValidSolution = params.bValidSolution;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameInfo(AActor*& Telescope, FName& PointOfInterest, FAstronomyMiniGameSolutionEntry& Solution, FAstronomyMiniGameSolveState& SolveState, bool& bIsValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameInfo"));
    struct Params_GetAstronomyMiniGameInfo {
        AActor* Telescope; // 0x0
        FName PointOfInterest; // 0x8
        FAstronomyMiniGameSolutionEntry Solution; // 0x10
        FAstronomyMiniGameSolveState SolveState; // 0x40
        bool bIsValid; // 0x50
    }; // Size: 0x51
    Params_GetAstronomyMiniGameInfo params{};
    params.Telescope = (AActor*)Telescope;
    params.PointOfInterest = (FName)PointOfInterest;
    params.Solution = (FAstronomyMiniGameSolutionEntry)Solution;
    params.SolveState = (FAstronomyMiniGameSolveState)SolveState;
    params.bIsValid = (bool)bIsValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Telescope = params.Telescope;
    PointOfInterest = params.PointOfInterest;
    SolveState = params.SolveState;
    Solution = params.Solution;
    bIsValid = params.bIsValid;
}
float UAstronomyMiniGameSolutions::GetAstronomyMiniGameDistanceFromSolution() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameDistanceFromSolution"));
    struct Params_GetAstronomyMiniGameDistanceFromSolution {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAstronomyMiniGameDistanceFromSolution params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameApproachRotationRollLerp(float& ApproachRotationRollLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameApproachRotationRollLerp"));
    struct Params_GetAstronomyMiniGameApproachRotationRollLerp {
        float ApproachRotationRollLerp; // 0x0
    }; // Size: 0x4
    Params_GetAstronomyMiniGameApproachRotationRollLerp params{};
    params.ApproachRotationRollLerp = (float)ApproachRotationRollLerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ApproachRotationRollLerp = params.ApproachRotationRollLerp;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameApproachRotationPitchYawLerp(float& ApproachRotationPitchYawLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameApproachRotationPitchYawLerp"));
    struct Params_GetAstronomyMiniGameApproachRotationPitchYawLerp {
        float ApproachRotationPitchYawLerp; // 0x0
    }; // Size: 0x4
    Params_GetAstronomyMiniGameApproachRotationPitchYawLerp params{};
    params.ApproachRotationPitchYawLerp = (float)ApproachRotationPitchYawLerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ApproachRotationPitchYawLerp = params.ApproachRotationPitchYawLerp;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameApproachLerp(float& ApproachLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameApproachLerp"));
    struct Params_GetAstronomyMiniGameApproachLerp {
        float ApproachLerp; // 0x0
    }; // Size: 0x4
    Params_GetAstronomyMiniGameApproachLerp params{};
    params.ApproachLerp = (float)ApproachLerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ApproachLerp = params.ApproachLerp;
}
void UAstronomyMiniGameSolutions::GetAstronomyMiniGameApproachFOVLerp(float& ApproachFOVLerp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.GetAstronomyMiniGameApproachFOVLerp"));
    struct Params_GetAstronomyMiniGameApproachFOVLerp {
        float ApproachFOVLerp; // 0x0
    }; // Size: 0x4
    Params_GetAstronomyMiniGameApproachFOVLerp params{};
    params.ApproachFOVLerp = (float)ApproachFOVLerp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ApproachFOVLerp = params.ApproachFOVLerp;
}
void UAstronomyMiniGameSolutions::AstronomyMiniGameSolutionLogRow(FName PointOfInterestRowName, FAstronomyMiniGameSolutionEntry Solution, bool bWithRowHeader) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.AstronomyMiniGameSolutionLogRow"));
    struct Params_AstronomyMiniGameSolutionLogRow {
        FName PointOfInterestRowName; // 0x0
        FAstronomyMiniGameSolutionEntry Solution; // 0x8
        bool bWithRowHeader; // 0x38
    }; // Size: 0x39
    Params_AstronomyMiniGameSolutionLogRow params{};
    params.PointOfInterestRowName = (FName)PointOfInterestRowName;
    params.Solution = (FAstronomyMiniGameSolutionEntry)Solution;
    params.bWithRowHeader = (bool)bWithRowHeader;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAstronomyMiniGameSolutions::AstronomyMiniGameConstellationOverride(int32_t& ConstellationOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.AstronomyMiniGameConstellationOverride"));
    struct Params_AstronomyMiniGameConstellationOverride {
        int32_t ConstellationOverride; // 0x0
    }; // Size: 0x4
    Params_AstronomyMiniGameConstellationOverride params{};
    params.ConstellationOverride = (int32_t)ConstellationOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ConstellationOverride = params.ConstellationOverride;
}
void UAstronomyMiniGameSolutions::AstronomyMiniGameAllowSolving(bool& bAllowSolving) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AstronomyMiniGameSolutions.AstronomyMiniGameAllowSolving"));
    struct Params_AstronomyMiniGameAllowSolving {
        bool bAllowSolving; // 0x0
    }; // Size: 0x1
    Params_AstronomyMiniGameAllowSolving params{};
    params.bAllowSolving = (bool)bAllowSolving;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bAllowSolving = params.bAllowSolving;
}

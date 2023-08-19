#pragma once
#include <cstdint>
#include "FAstronomyMiniGameSolutionEntry.hpp"
#include "FAstronomyMiniGameSolveState.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UDataTable;
#pragma pack(push, 1)
class UAstronomyMiniGameSolutions : public UBlueprintFunctionLibrary {
public:
    static UAstronomyMiniGameSolutions* StaticClass();
    static void UpdateAstronomyMiniGameSolvedLerp(AActor* Actor, FAstronomyMiniGameSolveState SolveState);
    static void UpdateAstronomyMiniGameSolve(AActor* Actor, FAstronomyMiniGameSolveState SolveState, bool& bIsSolved);
    static void SetupAstronomyMiniGameSolve(AActor* Actor, FName PointOfInterest, FAstronomyMiniGameSolutionEntry& Solution, FAstronomyMiniGameSolveState SolveState, FString Extra);
    static void SetAstronomyMiniGameDone(AActor* Actor);
    static void GetAstronomyMiniGameSolved(bool& bIsSolved);
    static void GetAstronomyMiniGameSolution(UDataTable* SolutionTable, FName PointOfInterest, FAstronomyMiniGameSolutionEntry& Solution, bool& bValidSolution);
    static void GetAstronomyMiniGameIsRunning(bool& bIsRunning);
    static void GetAstronomyMiniGameInfo(AActor*& Telescope, FName& PointOfInterest, FAstronomyMiniGameSolutionEntry& Solution, FAstronomyMiniGameSolveState& SolveState, bool& bIsValid);
    static float GetAstronomyMiniGameDistanceFromSolution();
    static void GetAstronomyMiniGameApproachRotationRollLerp(float& ApproachRotationRollLerp);
    static void GetAstronomyMiniGameApproachRotationPitchYawLerp(float& ApproachRotationPitchYawLerp);
    static void GetAstronomyMiniGameApproachLerp(float& ApproachLerp);
    static void GetAstronomyMiniGameApproachFOVLerp(float& ApproachFOVLerp);
    static void AstronomyMiniGameSolutionLogRow(FName PointOfInterestRowName, FAstronomyMiniGameSolutionEntry Solution, bool bWithRowHeader);
    static void AstronomyMiniGameConstellationOverride(int32_t& ConstellationOverride);
    static void AstronomyMiniGameAllowSolving(bool& bAllowSolving);
}; // Size: 0x28
#pragma pack(pop)

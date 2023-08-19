#include "ACharacter.hpp"
#include "AController.hpp"
#include "AEnemyBroomRider_AiController.hpp"
#include "EBroomEnemyState\Type.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFlyingBroomPhysicsScratch_Spline.hpp"
#include "UFunction.hpp"
#include "UScheduledEntity.hpp"
void AEnemyBroomRider_AiController::GoToPointOnSpline(int32_t Point) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.GoToPointOnSpline"));
    struct Params_GoToPointOnSpline {
        int32_t Point; // 0x0
    }; // Size: 0x4
    Params_GoToPointOnSpline params{};
    params.Point = (int32_t)Point;
    ProcessEvent(func, &params);
}
void AEnemyBroomRider_AiController::ResumeBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.ResumeBroom"));
    struct Params_ResumeBroom {
    }; // Size: 0x0
    Params_ResumeBroom params{};
    ProcessEvent(func, &params);
}
AEnemyBroomRider_AiController* AEnemyBroomRider_AiController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyBroomRider_AiController");
    return (AEnemyBroomRider_AiController*)res;
}
void AEnemyBroomRider_AiController::BarrelRollRight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.BarrelRollRight"));
    struct Params_BarrelRollRight {
    }; // Size: 0x0
    Params_BarrelRollRight params{};
    ProcessEvent(func, &params);
}
void AEnemyBroomRider_AiController::StopAndWaitForPlayer(float CriticalDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.StopAndWaitForPlayer"));
    struct Params_StopAndWaitForPlayer {
        float CriticalDistance; // 0x0
    }; // Size: 0x4
    Params_StopAndWaitForPlayer params{};
    params.CriticalDistance = (float)CriticalDistance;
    ProcessEvent(func, &params);
}
void AEnemyBroomRider_AiController::SetBroomYaw(float Yaw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.SetBroomYaw"));
    struct Params_SetBroomYaw {
        float Yaw; // 0x0
    }; // Size: 0x4
    Params_SetBroomYaw params{};
    params.Yaw = (float)Yaw;
    ProcessEvent(func, &params);
}
void AEnemyBroomRider_AiController::PauseBroom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.PauseBroom"));
    struct Params_PauseBroom {
    }; // Size: 0x0
    Params_PauseBroom params{};
    ProcessEvent(func, &params);
}
float AEnemyBroomRider_AiController::GetDistanceFromPlayer(UFlyingBroomPhysicsScratch_Spline* SplinePhysicsScratch, ACharacter* Player) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.GetDistanceFromPlayer"));
    struct Params_GetDistanceFromPlayer {
        UFlyingBroomPhysicsScratch_Spline* SplinePhysicsScratch; // 0x0
        ACharacter* Player; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetDistanceFromPlayer params{};
    params.SplinePhysicsScratch = (UFlyingBroomPhysicsScratch_Spline*)SplinePhysicsScratch;
    params.Player = (ACharacter*)Player;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void AEnemyBroomRider_AiController::BarrelRollLeft() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBroomRider_AiController.BarrelRollLeft"));
    struct Params_BarrelRollLeft {
    }; // Size: 0x0
    Params_BarrelRollLeft params{};
    ProcessEvent(func, &params);
}

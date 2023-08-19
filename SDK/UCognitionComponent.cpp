#include "AActor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAIPerceptionComponent.hpp"
#include "UClass.hpp"
#include "UCognitionComponent.hpp"
#include "UFunction.hpp"
UCognitionComponent* UCognitionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CognitionComponent");
    return (UCognitionComponent*)res;
}
void UCognitionComponent::SetMovementFocusDirection(FVector& WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.SetMovementFocusDirection"));
    struct Params_SetMovementFocusDirection {
        FVector WorldDirection; // 0x0
    }; // Size: 0xc
    Params_SetMovementFocusDirection params{};
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
    WorldDirection = params.WorldDirection;
}
void UCognitionComponent::TimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.TimerExpired"));
    struct Params_TimerExpired {
    }; // Size: 0x0
    Params_TimerExpired params{};
    ProcessEvent(func, &params);
}
void UCognitionComponent::SetRightStickMoving(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.SetRightStickMoving"));
    struct Params_SetRightStickMoving {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetRightStickMoving params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
bool UCognitionComponent::IsRightStickMoving() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.IsRightStickMoving"));
    struct Params_IsRightStickMoving {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRightStickMoving params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCognitionComponent::SetLeftStickMoving(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.SetLeftStickMoving"));
    struct Params_SetLeftStickMoving {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetLeftStickMoving params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void UCognitionComponent::SetIsLocked(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.SetIsLocked"));
    struct Params_SetIsLocked {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_SetIsLocked params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
void UCognitionComponent::SetCameraLastMovedStick(bool InFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.SetCameraLastMovedStick"));
    struct Params_SetCameraLastMovedStick {
        bool InFlag; // 0x0
    }; // Size: 0x1
    Params_SetCameraLastMovedStick params{};
    params.InFlag = (bool)InFlag;
    ProcessEvent(func, &params);
}
bool UCognitionComponent::IsLocked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.IsLocked"));
    struct Params_IsLocked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLocked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCognitionComponent::IsLeftStickMoving() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.IsLeftStickMoving"));
    struct Params_IsLeftStickMoving {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLeftStickMoving params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCognitionComponent::IsCameraLastMovedStick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.IsCameraLastMovedStick"));
    struct Params_IsCameraLastMovedStick {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCameraLastMovedStick params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UCognitionComponent::GetMovementFocusDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.GetMovementFocusDirection"));
    struct Params_GetMovementFocusDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetMovementFocusDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UCognitionComponent::GetCameraFlickDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.GetCameraFlickDirection"));
    struct Params_GetCameraFlickDirection {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCameraFlickDirection params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
AActor* UCognitionComponent::GetBestTarget(UClass* SenseImplementation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.GetBestTarget"));
    struct Params_GetBestTarget {
        UClass* SenseImplementation; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBestTarget params{};
    params.SenseImplementation = (UClass*)SenseImplementation;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UCognitionComponent::DEBUG_CycleDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.DEBUG_CycleDebug"));
    struct Params_DEBUG_CycleDebug {
    }; // Size: 0x0
    Params_DEBUG_CycleDebug params{};
    ProcessEvent(func, &params);
}
void UCognitionComponent::DEBUG_ByIndex(int32_t InIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Cognition.CognitionComponent.DEBUG_ByIndex"));
    struct Params_DEBUG_ByIndex {
        int32_t InIndex; // 0x0
    }; // Size: 0x4
    Params_DEBUG_ByIndex params{};
    params.InIndex = (int32_t)InIndex;
    ProcessEvent(func, &params);
}

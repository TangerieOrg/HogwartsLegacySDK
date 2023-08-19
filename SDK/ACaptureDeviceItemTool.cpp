#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACaptureDeviceItemTool.hpp"
#include "AInventoryItemTool.hpp"
#include "ECaptureState.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAkAudioEvent.hpp"
#include "UCapturingWidget.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USkinnedMeshComponent.hpp"
ACaptureDeviceItemTool* ACaptureDeviceItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CaptureDeviceItemTool");
    return (ACaptureDeviceItemTool*)res;
}
void ACaptureDeviceItemTool::PlayCaptureStinger() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.PlayCaptureStinger"));
    struct Params_PlayCaptureStinger {
    }; // Size: 0x0
    Params_PlayCaptureStinger params{};
    ProcessEvent(func, &params);
}
void ACaptureDeviceItemTool::OnConfirmCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.OnConfirmCapture"));
    struct Params_OnConfirmCapture {
    }; // Size: 0x0
    Params_OnConfirmCapture params{};
    ProcessEvent(func, &params);
}
bool ACaptureDeviceItemTool::IsTargetConsideredLarge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.IsTargetConsideredLarge"));
    struct Params_IsTargetConsideredLarge {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTargetConsideredLarge params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACaptureDeviceItemTool::OnCompletedGate(bool bIsFinalGate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.OnCompletedGate"));
    struct Params_OnCompletedGate {
        bool bIsFinalGate; // 0x0
    }; // Size: 0x1
    Params_OnCompletedGate params{};
    params.bIsFinalGate = (bool)bIsFinalGate;
    ProcessEvent(func, &params);
}
void ACaptureDeviceItemTool::OnCaptureStateChanged(ECaptureState PreviousState, ECaptureState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.OnCaptureStateChanged"));
    struct Params_OnCaptureStateChanged {
        ECaptureState PreviousState; // 0x0
        ECaptureState NewState; // 0x1
    }; // Size: 0x2
    Params_OnCaptureStateChanged params{};
    params.PreviousState = (ECaptureState)PreviousState;
    params.NewState = (ECaptureState)NewState;
    ProcessEvent(func, &params);
}
void ACaptureDeviceItemTool::OnCancelCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.OnCancelCapture"));
    struct Params_OnCancelCapture {
    }; // Size: 0x0
    Params_OnCancelCapture params{};
    ProcessEvent(func, &params);
}
void ACaptureDeviceItemTool::InvalidateCachedMeshBounds(USkinnedMeshComponent* InMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.InvalidateCachedMeshBounds"));
    struct Params_InvalidateCachedMeshBounds {
        USkinnedMeshComponent* InMeshComponent; // 0x0
    }; // Size: 0x8
    Params_InvalidateCachedMeshBounds params{};
    params.InMeshComponent = (USkinnedMeshComponent*)InMeshComponent;
    ProcessEvent(func, &params);
}
int32_t ACaptureDeviceItemTool::GetTotalNumGates() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetTotalNumGates"));
    struct Params_GetTotalNumGates {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTotalNumGates params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
AActor* ACaptureDeviceItemTool::GetTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetTargetActor"));
    struct Params_GetTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
float ACaptureDeviceItemTool::GetProgressTowardNextGate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetProgressTowardNextGate"));
    struct Params_GetProgressTowardNextGate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetProgressTowardNextGate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t ACaptureDeviceItemTool::GetNumGatesPassed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetNumGatesPassed"));
    struct Params_GetNumGatesPassed {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumGatesPassed params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float ACaptureDeviceItemTool::GetMaxCapturingDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetMaxCapturingDistance"));
    struct Params_GetMaxCapturingDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMaxCapturingDistance params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool ACaptureDeviceItemTool::GetIsGateActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetIsGateActive"));
    struct Params_GetIsGateActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsGateActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ACaptureDeviceItemTool::GetCapturingProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.GetCapturingProgress"));
    struct Params_GetCapturingProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCapturingProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ACaptureDeviceItemTool::FinishSucceeding() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.FinishSucceeding"));
    struct Params_FinishSucceeding {
    }; // Size: 0x0
    Params_FinishSucceeding params{};
    ProcessEvent(func, &params);
}
void ACaptureDeviceItemTool::FinishCancelling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.FinishCancelling"));
    struct Params_FinishCancelling {
    }; // Size: 0x0
    Params_FinishCancelling params{};
    ProcessEvent(func, &params);
}
void ACaptureDeviceItemTool::BeginCapturing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CaptureDeviceItemTool.BeginCapturing"));
    struct Params_BeginCapturing {
    }; // Size: 0x0
    Params_BeginCapturing params{};
    ProcessEvent(func, &params);
}

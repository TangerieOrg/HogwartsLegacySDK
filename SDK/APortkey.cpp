#include "AActor.hpp"
#include "APortkey.hpp"
#include "ATargetPoint.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
void APortkey::Touch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Touch"));
    struct Params_Touch {
    }; // Size: 0x0
    Params_Touch params{};
    ProcessEvent(func, &params);
}
APortkey* APortkey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Portkey");
    return (APortkey*)res;
}
void APortkey::Transport() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Transport"));
    struct Params_Transport {
    }; // Size: 0x0
    Params_Transport params{};
    ProcessEvent(func, &params);
}
void APortkey::Handle_TeleportStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Handle_TeleportStart"));
    struct Params_Handle_TeleportStart {
    }; // Size: 0x0
    Params_Handle_TeleportStart params{};
    ProcessEvent(func, &params);
}
void APortkey::PlacePlayerOptimally() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.PlacePlayerOptimally"));
    struct Params_PlacePlayerOptimally {
    }; // Size: 0x0
    Params_PlacePlayerOptimally params{};
    ProcessEvent(func, &params);
}
void APortkey::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void APortkey::Handle_ActivateExitCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Handle_ActivateExitCamera"));
    struct Params_Handle_ActivateExitCamera {
    }; // Size: 0x0
    Params_Handle_ActivateExitCamera params{};
    ProcessEvent(func, &params);
}
void APortkey::Handle_TeleportEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Handle_TeleportEnd"));
    struct Params_Handle_TeleportEnd {
    }; // Size: 0x0
    Params_Handle_TeleportEnd params{};
    ProcessEvent(func, &params);
}
void APortkey::Handle_ActivateEnterCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Handle_ActivateEnterCamera"));
    struct Params_Handle_ActivateEnterCamera {
    }; // Size: 0x0
    Params_Handle_ActivateEnterCamera params{};
    ProcessEvent(func, &params);
}
ATargetPoint* APortkey::GetTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.GetTarget"));
    struct Params_GetTarget {
        ATargetPoint* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTarget params{};
    ProcessEvent(func, &params);
    return (ATargetPoint*)params.ReturnValue;
}
void APortkey::FindNonBlockingCameraLocation(FVector& Target1, FVector& Target2, FVector& CameraLocation, float CameraDistance, float CameraHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.FindNonBlockingCameraLocation"));
    struct Params_FindNonBlockingCameraLocation {
        FVector Target1; // 0x0
        FVector Target2; // 0xc
        FVector CameraLocation; // 0x18
        float CameraDistance; // 0x24
        float CameraHeight; // 0x28
    }; // Size: 0x2c
    Params_FindNonBlockingCameraLocation params{};
    params.Target1 = (FVector)Target1;
    params.Target2 = (FVector)Target2;
    params.CameraLocation = (FVector)CameraLocation;
    params.CameraDistance = (float)CameraDistance;
    params.CameraHeight = (float)CameraHeight;
    ProcessEvent(func, &params);
    Target2 = params.Target2;
    Target1 = params.Target1;
    CameraLocation = params.CameraLocation;
}
void APortkey::Drop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.Drop"));
    struct Params_Drop {
    }; // Size: 0x0
    Params_Drop params{};
    ProcessEvent(func, &params);
}
void APortkey::ActivateExitCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.ActivateExitCamera"));
    struct Params_ActivateExitCamera {
    }; // Size: 0x0
    Params_ActivateExitCamera params{};
    ProcessEvent(func, &params);
}
void APortkey::ActivateEnterCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Portkey.ActivateEnterCamera"));
    struct Params_ActivateEnterCamera {
    }; // Size: 0x0
    Params_ActivateEnterCamera params{};
    ProcessEvent(func, &params);
}

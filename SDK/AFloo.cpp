#include "AActor.hpp"
#include "AFloo.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UFunction.hpp"
AFloo* AFloo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Floo");
    return (AFloo*)res;
}
void AFloo::SetFlooSourceAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.SetFlooSourceAnim"));
    struct Params_SetFlooSourceAnim {
    }; // Size: 0x0
    Params_SetFlooSourceAnim params{};
    ProcessEvent(func, &params);
}
void AFloo::ShowAvatar(bool bTF) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.ShowAvatar"));
    struct Params_ShowAvatar {
        bool bTF; // 0x0
    }; // Size: 0x1
    Params_ShowAvatar params{};
    params.bTF = (bool)bTF;
    ProcessEvent(func, &params);
}
void AFloo::SetAvailable(bool availableIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.SetAvailable"));
    struct Params_SetAvailable {
        bool availableIn; // 0x0
    }; // Size: 0x1
    Params_SetAvailable params{};
    params.availableIn = (bool)availableIn;
    ProcessEvent(func, &params);
}
void AFloo::ReturnToGameCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.ReturnToGameCamera"));
    struct Params_ReturnToGameCamera {
    }; // Size: 0x0
    Params_ReturnToGameCamera params{};
    ProcessEvent(func, &params);
}
void AFloo::PlayerExitingFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerExitingFloo"));
    struct Params_PlayerExitingFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerExitingFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::PlayerSelectedFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerSelectedFloo"));
    struct Params_PlayerSelectedFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerSelectedFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::PlayerExitedFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerExitedFloo"));
    struct Params_PlayerExitedFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerExitedFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::PlayerEnteringFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerEnteringFloo"));
    struct Params_PlayerEnteringFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerEnteringFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::PlayerCanceledFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerCanceledFloo"));
    struct Params_PlayerCanceledFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerCanceledFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::PlayerEnteredFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerEnteredFloo"));
    struct Params_PlayerEnteredFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerEnteredFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::PlayerDroppedFlooPowder(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.PlayerDroppedFlooPowder"));
    struct Params_PlayerDroppedFlooPowder {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_PlayerDroppedFlooPowder params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::OnSaveGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.OnSaveGameLoad"));
    struct Params_OnSaveGameLoad {
    }; // Size: 0x0
    Params_OnSaveGameLoad params{};
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerSelectedFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerSelectedFloo"));
    struct Params_Handle_PlayerSelectedFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerSelectedFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
bool AFloo::IsForcedDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.IsForcedDestination"));
    struct Params_IsForcedDestination {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsForcedDestination params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFloo::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerDroppedFlooPowder(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerDroppedFlooPowder"));
    struct Params_Handle_PlayerDroppedFlooPowder {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerDroppedFlooPowder params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::Handle_SetAvailable(bool availableIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_SetAvailable"));
    struct Params_Handle_SetAvailable {
        bool availableIn; // 0x0
    }; // Size: 0x1
    Params_Handle_SetAvailable params{};
    params.availableIn = (bool)availableIn;
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerExitingFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerExitingFloo"));
    struct Params_Handle_PlayerExitingFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerExitingFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerExitedFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerExitedFloo"));
    struct Params_Handle_PlayerExitedFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerExitedFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::Handle_ActivateExitCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_ActivateExitCamera"));
    struct Params_Handle_ActivateExitCamera {
    }; // Size: 0x0
    Params_Handle_ActivateExitCamera params{};
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerEnteringFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerEnteringFloo"));
    struct Params_Handle_PlayerEnteringFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerEnteringFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::ActivateEnterCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.ActivateEnterCamera"));
    struct Params_ActivateEnterCamera {
    }; // Size: 0x0
    Params_ActivateEnterCamera params{};
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerEnteredFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerEnteredFloo"));
    struct Params_Handle_PlayerEnteredFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerEnteredFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::Handle_PlayerCanceledFloo(AActor* ActorUsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_PlayerCanceledFloo"));
    struct Params_Handle_PlayerCanceledFloo {
        AActor* ActorUsingFloo; // 0x0
    }; // Size: 0x8
    Params_Handle_PlayerCanceledFloo params{};
    params.ActorUsingFloo = (AActor*)ActorUsingFloo;
    ProcessEvent(func, &params);
}
void AFloo::Handle_ActivateEnterCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.Handle_ActivateEnterCamera"));
    struct Params_Handle_ActivateEnterCamera {
    }; // Size: 0x0
    Params_Handle_ActivateEnterCamera params{};
    ProcessEvent(func, &params);
}
FString AFloo::GetFlooName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.GetFlooName"));
    struct Params_GetFlooName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFlooName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool AFloo::GetAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.GetAvailable"));
    struct Params_GetAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFloo::ActivateExitCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Floo.ActivateExitCamera"));
    struct Params_ActivateExitCamera {
    }; // Size: 0x0
    Params_ActivateExitCamera params{};
    ProcessEvent(func, &params);
}

#include "ABiped_Player.hpp"
#include "ACreatureInteractionTool.hpp"
#include "ACreature_Character.hpp"
#include "AInventoryItemTool.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "UFunction.hpp"
void ACreatureInteractionTool::OnTickInteraction(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.OnTickInteraction"));
    struct Params_OnTickInteraction {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_OnTickInteraction params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
ACreatureInteractionTool* ACreatureInteractionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureInteractionTool");
    return (ACreatureInteractionTool*)res;
}
void ACreatureInteractionTool::OnInteractionStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.OnInteractionStarted"));
    struct Params_OnInteractionStarted {
    }; // Size: 0x0
    Params_OnInteractionStarted params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::RequestInteractionEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.RequestInteractionEnd"));
    struct Params_RequestInteractionEnd {
    }; // Size: 0x0
    Params_RequestInteractionEnd params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::DisableInteractionCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.DisableInteractionCamera"));
    struct Params_DisableInteractionCamera {
    }; // Size: 0x0
    Params_DisableInteractionCamera params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::RemoveLookAtTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.RemoveLookAtTarget"));
    struct Params_RemoveLookAtTarget {
    }; // Size: 0x0
    Params_RemoveLookAtTarget params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::RemoveFaceTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.RemoveFaceTarget"));
    struct Params_RemoveFaceTarget {
    }; // Size: 0x0
    Params_RemoveFaceTarget params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::OnInteractionEndRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.OnInteractionEndRequested"));
    struct Params_OnInteractionEndRequested {
    }; // Size: 0x0
    Params_OnInteractionEndRequested params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::OnInteractionEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.OnInteractionEnded"));
    struct Params_OnInteractionEnded {
    }; // Size: 0x0
    Params_OnInteractionEnded params{};
    ProcessEvent(func, &params);
}
bool ACreatureInteractionTool::GetInteractionEndRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.GetInteractionEndRequested"));
    struct Params_GetInteractionEndRequested {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInteractionEndRequested params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACreatureInteractionTool::EnableInteractionCamera() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.EnableInteractionCamera"));
    struct Params_EnableInteractionCamera {
    }; // Size: 0x0
    Params_EnableInteractionCamera params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::AllowInteractionEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.AllowInteractionEnd"));
    struct Params_AllowInteractionEnd {
    }; // Size: 0x0
    Params_AllowInteractionEnd params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::AddLookAtTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.AddLookAtTarget"));
    struct Params_AddLookAtTarget {
    }; // Size: 0x0
    Params_AddLookAtTarget params{};
    ProcessEvent(func, &params);
}
void ACreatureInteractionTool::AddFaceTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureInteractionTool.AddFaceTarget"));
    struct Params_AddFaceTarget {
    }; // Size: 0x0
    Params_AddFaceTarget params{};
    ProcessEvent(func, &params);
}

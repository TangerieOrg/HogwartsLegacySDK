#include "AActor.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "AMunitionType_Base.hpp"
#include "ASpellTool.hpp"
#include "ECollisionChannel.hpp"
#include "EComboType.hpp"
#include "ENoiseSize.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FMunitionImpactData.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
void AMunitionType_AOE_MultiFX::OnExplode(FVector& Location, FRotator& Rotation, FMultiFX2Handle FXHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.OnExplode"));
    struct Params_OnExplode {
        FVector Location; // 0x0
        FRotator Rotation; // 0xc
        FMultiFX2Handle FXHandle; // 0x18
    }; // Size: 0x20
    Params_OnExplode params{};
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    ProcessEvent(func, &params);
    Location = params.Location;
    Rotation = params.Rotation;
}
void AMunitionType_AOE_MultiFX::TriggerWarningLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerWarningLoop"));
    struct Params_TriggerWarningLoop {
    }; // Size: 0x0
    Params_TriggerWarningLoop params{};
    ProcessEvent(func, &params);
}
AMunitionType_AOE_MultiFX* AMunitionType_AOE_MultiFX::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_AOE_MultiFX");
    return (AMunitionType_AOE_MultiFX*)res;
}
void AMunitionType_AOE_MultiFX::TriggerImpact(bool bSkipStartState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerImpact"));
    struct Params_TriggerImpact {
        bool bSkipStartState; // 0x0
    }; // Size: 0x1
    Params_TriggerImpact params{};
    params.bSkipStartState = (bool)bSkipStartState;
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerWarningStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerWarningStart"));
    struct Params_TriggerWarningStart {
    }; // Size: 0x0
    Params_TriggerWarningStart params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerFizzle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerFizzle"));
    struct Params_TriggerFizzle {
    }; // Size: 0x0
    Params_TriggerFizzle params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerWarning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerWarning"));
    struct Params_TriggerWarning {
    }; // Size: 0x0
    Params_TriggerWarning params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerImpactEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerImpactEnd"));
    struct Params_TriggerImpactEnd {
    }; // Size: 0x0
    Params_TriggerImpactEnd params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerExplode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerExplode"));
    struct Params_TriggerExplode {
    }; // Size: 0x0
    Params_TriggerExplode params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerEnd"));
    struct Params_TriggerEnd {
    }; // Size: 0x0
    Params_TriggerEnd params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerArresto() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerArresto"));
    struct Params_TriggerArresto {
    }; // Size: 0x0
    Params_TriggerArresto params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::TriggerAnnounceLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.TriggerAnnounceLoop"));
    struct Params_TriggerAnnounceLoop {
    }; // Size: 0x0
    Params_TriggerAnnounceLoop params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::OnWarning(FVector& Location, FRotator& Rotation, FMultiFX2Handle FXHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.OnWarning"));
    struct Params_OnWarning {
        FVector Location; // 0x0
        FRotator Rotation; // 0xc
        FMultiFX2Handle FXHandle; // 0x18
    }; // Size: 0x20
    Params_OnWarning params{};
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    ProcessEvent(func, &params);
    Location = params.Location;
    Rotation = params.Rotation;
}
void AMunitionType_AOE_MultiFX::OnHit(FMunitionImpactData& MunitionImpact, FHitResult& HitResult, bool bHit, bool bBlocked, bool bFailed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.OnHit"));
    struct Params_OnHit {
        FMunitionImpactData MunitionImpact; // 0x0
        FHitResult HitResult; // 0xf0
        bool bHit; // 0x178
        bool bBlocked; // 0x179
        bool bFailed; // 0x17a
    }; // Size: 0x17b
    Params_OnHit params{};
    params.MunitionImpact = (FMunitionImpactData)MunitionImpact;
    params.HitResult = (FHitResult)HitResult;
    params.bHit = (bool)bHit;
    params.bBlocked = (bool)bBlocked;
    params.bFailed = (bool)bFailed;
    ProcessEvent(func, &params);
    MunitionImpact = params.MunitionImpact;
    HitResult = params.HitResult;
}
void AMunitionType_AOE_MultiFX::OnAnnounce(FVector& Location, FRotator& Rotation, FMultiFX2Handle FXHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.OnAnnounce"));
    struct Params_OnAnnounce {
        FVector Location; // 0x0
        FRotator Rotation; // 0xc
        FMultiFX2Handle FXHandle; // 0x18
    }; // Size: 0x20
    Params_OnAnnounce params{};
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    params.FXHandle = (FMultiFX2Handle)FXHandle;
    ProcessEvent(func, &params);
    Location = params.Location;
    Rotation = params.Rotation;
}
bool AMunitionType_AOE_MultiFX::IsArresto() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.IsArresto"));
    struct Params_IsArresto {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsArresto params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FMultiFX2Handle AMunitionType_AOE_MultiFX::GetWarningFXHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.GetWarningFXHandle"));
    struct Params_GetWarningFXHandle {
        FMultiFX2Handle ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWarningFXHandle params{};
    ProcessEvent(func, &params);
    return (FMultiFX2Handle)params.ReturnValue;
}
FMultiFX2Handle AMunitionType_AOE_MultiFX::GetFizzleFXHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.GetFizzleFXHandle"));
    struct Params_GetFizzleFXHandle {
        FMultiFX2Handle ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFizzleFXHandle params{};
    ProcessEvent(func, &params);
    return (FMultiFX2Handle)params.ReturnValue;
}
FMultiFX2Handle AMunitionType_AOE_MultiFX::GetExplodeFXHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.GetExplodeFXHandle"));
    struct Params_GetExplodeFXHandle {
        FMultiFX2Handle ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetExplodeFXHandle params{};
    ProcessEvent(func, &params);
    return (FMultiFX2Handle)params.ReturnValue;
}
FMultiFX2Handle AMunitionType_AOE_MultiFX::GetAnnounceFXHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.GetAnnounceFXHandle"));
    struct Params_GetAnnounceFXHandle {
        FMultiFX2Handle ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnnounceFXHandle params{};
    ProcessEvent(func, &params);
    return (FMultiFX2Handle)params.ReturnValue;
}
void AMunitionType_AOE_MultiFX::EndArresto() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.EndArresto"));
    struct Params_EndArresto {
    }; // Size: 0x0
    Params_EndArresto params{};
    ProcessEvent(func, &params);
}
void AMunitionType_AOE_MultiFX::Cancel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MunitionType_AOE_MultiFX.Cancel"));
    struct Params_Cancel {
    }; // Size: 0x0
    Params_Cancel params{};
    ProcessEvent(func, &params);
}

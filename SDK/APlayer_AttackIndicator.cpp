#include "AActor.hpp"
#include "APlayer_AttackIndicator.hpp"
#include "FMultiFX2Handle.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
void APlayer_AttackIndicator::ReceiveIndicatorStart(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle, float InEstimatedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Player_AttackIndicator.ReceiveIndicatorStart"));
    struct Params_ReceiveIndicatorStart {
        bool bIsParryIndicator; // 0x0
        bool bIsUnblockableIndicator; // 0x1
        char pad_2[0x6];
        FMultiFX2Handle InFX2Handle; // 0x8
        float InEstimatedTime; // 0x10
    }; // Size: 0x14
    Params_ReceiveIndicatorStart params{};
    params.bIsParryIndicator = (bool)bIsParryIndicator;
    params.bIsUnblockableIndicator = (bool)bIsUnblockableIndicator;
    params.InFX2Handle = (FMultiFX2Handle)InFX2Handle;
    params.InEstimatedTime = (float)InEstimatedTime;
    ProcessEvent(func, &params);
}
APlayer_AttackIndicator* APlayer_AttackIndicator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Player_AttackIndicator");
    return (APlayer_AttackIndicator*)res;
}
void APlayer_AttackIndicator::ReceivePerfectParry(FMultiFX2Handle InParraybleFX2Handle, FMultiFX2Handle InPerfectParryFX2Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Player_AttackIndicator.ReceivePerfectParry"));
    struct Params_ReceivePerfectParry {
        FMultiFX2Handle InParraybleFX2Handle; // 0x0
        FMultiFX2Handle InPerfectParryFX2Handle; // 0x8
    }; // Size: 0x10
    Params_ReceivePerfectParry params{};
    params.InParraybleFX2Handle = (FMultiFX2Handle)InParraybleFX2Handle;
    params.InPerfectParryFX2Handle = (FMultiFX2Handle)InPerfectParryFX2Handle;
    ProcessEvent(func, &params);
}
void APlayer_AttackIndicator::ReceiveIndicatorStop(bool bIsParryIndicator, bool bIsUnblockableIndicator, FMultiFX2Handle InFX2Handle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Player_AttackIndicator.ReceiveIndicatorStop"));
    struct Params_ReceiveIndicatorStop {
        bool bIsParryIndicator; // 0x0
        bool bIsUnblockableIndicator; // 0x1
        char pad_2[0x6];
        FMultiFX2Handle InFX2Handle; // 0x8
    }; // Size: 0x10
    Params_ReceiveIndicatorStop params{};
    params.bIsParryIndicator = (bool)bIsParryIndicator;
    params.bIsUnblockableIndicator = (bool)bIsUnblockableIndicator;
    params.InFX2Handle = (FMultiFX2Handle)InFX2Handle;
    ProcessEvent(func, &params);
}

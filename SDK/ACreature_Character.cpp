#include "AActor.hpp"
#include "ACreature_Character.hpp"
#include "ANPC_Character.hpp"
#include "APathNode.hpp"
#include "ECreatureAIInitialState.hpp"
#include "ECreatureCageAnimation.hpp"
#include "ECreatureFlightState.hpp"
#include "ECreatureLandingType.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "ECreatureStoppingMode.hpp"
#include "FGameplayTagContainer.hpp"
#include "FOdcFlags.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UAnimationComponent.hpp"
#include "UCentaurCombatComponent.hpp"
#include "UCreature_AIComponent.hpp"
#include "UCreature_CombatComponentV2.hpp"
#include "UCreature_FlightMotionTable.hpp"
#include "UCreature_MountComponent.hpp"
#include "UCreature_NurtureComponent.hpp"
#include "UEnemyStateComponent.hpp"
#include "UFlightAnimationComponent.hpp"
#include "UFunction.hpp"
#include "UIcarus3DMovementComponent.hpp"
#include "UMercunaNavigationComponent.hpp"
#include "UParticleSystem.hpp"
#include "UUprightAttachSceneComponent.hpp"
ACreature_Character* ACreature_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_Character");
    return (ACreature_Character*)res;
}
bool ACreature_Character::StartFire(float Amount, FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.StartFire"));
    struct Params_StartFire {
        float Amount; // 0x0
        FVector Location; // 0x4
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartFire params{};
    params.Amount = (float)Amount;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACreature_Character::SetCanUseIdleBreaksDefaultValue(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.SetCanUseIdleBreaksDefaultValue"));
    struct Params_SetCanUseIdleBreaksDefaultValue {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetCanUseIdleBreaksDefaultValue params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void ACreature_Character::ShowCreatureFollowScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.ShowCreatureFollowScreen"));
    struct Params_ShowCreatureFollowScreen {
    }; // Size: 0x0
    Params_ShowCreatureFollowScreen params{};
    ProcessEvent(func, &params);
}
void ACreature_Character::OnFireExtinguished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.OnFireExtinguished"));
    struct Params_OnFireExtinguished {
    }; // Size: 0x0
    Params_OnFireExtinguished params{};
    ProcessEvent(func, &params);
}
bool ACreature_Character::SetAvoidanceAgainst(AActor* Actor, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.SetAvoidanceAgainst"));
    struct Params_SetAvoidanceAgainst {
        AActor* Actor; // 0x0
        bool bEnable; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetAvoidanceAgainst params{};
    params.Actor = (AActor*)Actor;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACreature_Character::OnCompletelyCharred() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.OnCompletelyCharred"));
    struct Params_OnCompletelyCharred {
    }; // Size: 0x0
    Params_OnCompletelyCharred params{};
    ProcessEvent(func, &params);
}
bool ACreature_Character::IsActivePlayerMount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.IsActivePlayerMount"));
    struct Params_IsActivePlayerMount {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActivePlayerMount params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ACreature_Character::GetTrackerIsStationary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.GetTrackerIsStationary"));
    struct Params_GetTrackerIsStationary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackerIsStationary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ACreature_Character::GetTrackerAverageSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.GetTrackerAverageSpeed"));
    struct Params_GetTrackerAverageSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTrackerAverageSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UCreature_MountComponent* ACreature_Character::GetMountComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.GetMountComponent"));
    struct Params_GetMountComponent {
        UCreature_MountComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMountComponent params{};
    ProcessEvent(func, &params);
    return (UCreature_MountComponent*)params.ReturnValue;
}
void ACreature_Character::ExecuteInitialIdleAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.ExecuteInitialIdleAbility"));
    struct Params_ExecuteInitialIdleAbility {
    }; // Size: 0x0
    Params_ExecuteInitialIdleAbility params{};
    ProcessEvent(func, &params);
}
void ACreature_Character::ExecuteInitialFlyingAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_Character.ExecuteInitialFlyingAbility"));
    struct Params_ExecuteInitialFlyingAbility {
    }; // Size: 0x0
    Params_ExecuteInitialFlyingAbility params{};
    ProcessEvent(func, &params);
}

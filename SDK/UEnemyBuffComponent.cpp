#include "AActor.hpp"
#include "EEnemyBuffTypeEnum.hpp"
#include "FEBC_BoneRadiusVelocity.hpp"
#include "UActorComponent.hpp"
#include "UEnemyBuffComponent.hpp"
#include "UFunction.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
UEnemyBuffComponent* UEnemyBuffComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyBuffComponent");
    return (UEnemyBuffComponent*)res;
}
void UEnemyBuffComponent::EnableBuff(AActor* pActorMaster) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.EnemyBuffComponent.EnableBuff"));
    struct Params_EnableBuff {
        AActor* pActorMaster; // 0x0
    }; // Size: 0x8
    Params_EnableBuff params{};
    params.pActorMaster = (AActor*)pActorMaster;
    ProcessEvent(func, &params);
}

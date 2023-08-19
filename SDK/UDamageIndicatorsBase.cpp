#include "FVector2D.hpp"
#include "UDamageIndicatorsBase.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
UDamageIndicatorsBase* UDamageIndicatorsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DamageIndicatorsBase");
    return (UDamageIndicatorsBase*)res;
}
void UDamageIndicatorsBase::OnNPC_Damaged(FVector2D& ScreenPos, float Damage, bool IsVulnerableDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DamageIndicatorsBase.OnNPC_Damaged"));
    struct Params_OnNPC_Damaged {
        FVector2D ScreenPos; // 0x0
        float Damage; // 0x8
        bool IsVulnerableDamage; // 0xc
    }; // Size: 0xd
    Params_OnNPC_Damaged params{};
    params.ScreenPos = (FVector2D)ScreenPos;
    params.Damage = (float)Damage;
    params.IsVulnerableDamage = (bool)IsVulnerableDamage;
    ProcessEvent(func, &params);
    ScreenPos = params.ScreenPos;
}

#include "AConsumablePotionItemTool.hpp"
#include "AInventoryItemTool.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UParticleSystem.hpp"
#include "UStaticMeshComponent.hpp"
AConsumablePotionItemTool* AConsumablePotionItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConsumablePotionItemTool");
    return (AConsumablePotionItemTool*)res;
}
void AConsumablePotionItemTool::ThrowPotionBottleTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConsumablePotionItemTool.ThrowPotionBottleTimerExpired"));
    struct Params_ThrowPotionBottleTimerExpired {
    }; // Size: 0x0
    Params_ThrowPotionBottleTimerExpired params{};
    ProcessEvent(func, &params);
}
void AConsumablePotionItemTool::ThrowPotionBottle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConsumablePotionItemTool.ThrowPotionBottle"));
    struct Params_ThrowPotionBottle {
    }; // Size: 0x0
    Params_ThrowPotionBottle params{};
    ProcessEvent(func, &params);
}
void AConsumablePotionItemTool::DrinkPotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConsumablePotionItemTool.DrinkPotion"));
    struct Params_DrinkPotion {
    }; // Size: 0x0
    Params_DrinkPotion params{};
    ProcessEvent(func, &params);
}

#pragma once
#include <cstdint>
#include "FAttackStateInfo.hpp"
#include "FAwareStateInfo.hpp"
#include "FLinearColor.hpp"
#include "UWidgetComponent.hpp"
class UEnemyAIComponent;
class UScheduledEntity;
class UObject;
struct FEnemy_AttackThreatData;
class UWidget;
class UCanvasPanelSlot;
class UPhoenixUserWidget;
#pragma pack(push, 1)
class UCallOutComponent : public UWidgetComponent {
public:
    bool OnScreen; // 0x5d0
    bool targeted; // 0x5d1
    bool EnemytoPlayer; // 0x5d2
    char pad_5d3[0x3d];
    FName BeaconIconName; // 0x610
    FString BeaconTrackingBorder; // 0x618
    FLinearColor BeaconColor; // 0x628
    float BeaconSize; // 0x638
    bool IsBeaconTracked; // 0x63c
    FAttackStateInfo CurrentAttackStateInfo; // 0x63d
    char pad_63f[0x1];
    FAwareStateInfo CurrentAwareStateInfo; // 0x640
    float PostAlertKeepActiveTime; // 0x648
    char pad_64c[0x84];
    UEnemyAIComponent* EnemyAIComp; // 0x6d0
    UScheduledEntity* MyScheduledEntity; // 0x6d8
    UWidget* OffScreenWidget; // 0x6e0
    UWidget* OffScreenArrow; // 0x6e8
    UCanvasPanelSlot* OffscreenWidgetHudSlot; // 0x6f0
    char pad_6f8[0x8];
    static UCallOutComponent* StaticClass();
    void UpdateCallOutUI();
    void ShowWidgetForThisCallout();
    void OnOutroEnded(UPhoenixUserWidget* BaseItem, int32_t OutroType);
    void HideWidgetForThisCallout();
    void AwareStateInfoHandler(UObject* i_caller, FAwareStateInfo& AwareStateInfo);
    void AttackThreatDataHandler(UObject* i_caller, FEnemy_AttackThreatData& AttackThreatData);
}; // Size: 0x700
#pragma pack(pop)

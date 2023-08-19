#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
class UWidget;
class UCallOutComponent;
#pragma pack(push, 1)
class UTargetCallOutWidget : public UInterface {
public:
    static UTargetCallOutWidget* StaticClass();
    void UpdateCallOutUI(FName CharacterID, float BarPercent);
    void ShowWidget(bool Revealio);
    void SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent);
    void SetIsOffscreenCallout(bool IsOffscreen);
    void SetHasOffscreenProxyActive(bool HasOffscreenProxy);
    float GetOutroDuration(int32_t OutroType);
    UWidget* GetOffscreenIndicator();
    void AwareStateInfoChanged(bool bFromUpdate);
    void AttackThreatDataChange(bool Revealio);
}; // Size: 0x28
#pragma pack(pop)

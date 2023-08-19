#pragma once
#include <cstdint>
#include "FDuelTechnique_UIData.hpp"
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UDuelTechniquesHUDBase : public UHUDElementGroup {
public:
    char pad_2e8[0x18];
    static UDuelTechniquesHUDBase* StaticClass();
    void OnTimedTechniqueUpdated(FName TechniqueID);
    void OnDuelTechniqueUpdatedByID(FName TechniqueID, int32_t NewValue);
    void OnDuelTechniquesInitialized(TArray<FDuelTechnique_UIData>& TechniqueUIData);
    void OnDuelTechniquesDone();
    void OnDuelTechniqueProgressFailedByID(FName TechniqueID, bool IsNew);
    void OnDuelTechniqueProgressCompletedByID(FName TechniqueID, bool IsNew);
    void HideUITimerExpired();
}; // Size: 0x300
#pragma pack(pop)

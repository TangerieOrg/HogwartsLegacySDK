#pragma once
#include <cstdint>
#include "AMunitionType_AccioSubsonicSpell.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_SubSonic_Accio_C : public AMunitionType_AccioSubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UNiagaraComponent* N_Trail; // 0x540
    static ABP_SubSonic_Accio_C* StaticClass();
    void OnHit(FHitResult& HitResult, bool bDestroyed, bool bHit, bool bBlocked, bool bFailed);
    void ExecuteUbergraph_BP_SubSonic_Accio(int32_t EntryPoint, FHitResult K2Node_Event_HitResult, bool K2Node_Event_bDestroyed, bool K2Node_Event_bHit, bool K2Node_Event_bBlocked, bool K2Node_Event_bFailed);
}; // Size: 0x548
#pragma pack(pop)

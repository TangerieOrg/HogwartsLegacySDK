#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
class UNiagaraComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_SubSonic_AttackSpit_Spider_Woodlouse_C : public AMunitionType_SubsonicSpell {
public:
    UNiagaraComponent* VFX_NS_SpiderVenom_Pro_Trail; // 0x538
    UNiagaraComponent* N_Trail; // 0x540
    UStaticMeshComponent* StaticMesh; // 0x548
    static ABP_SubSonic_AttackSpit_Spider_Woodlouse_C* StaticClass();
}; // Size: 0x550
#pragma pack(pop)

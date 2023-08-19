#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
class UNiagaraComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABP_SubSonic_Expelliarmus_C : public AMunitionType_SubsonicSpell {
public:
    UNiagaraComponent* Niagara_Proj; // 0x538
    USkeletalMeshComponent* SkeletalMesh; // 0x540
    static ABP_SubSonic_Expelliarmus_C* StaticClass();
}; // Size: 0x548
#pragma pack(pop)

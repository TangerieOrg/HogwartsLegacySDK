#pragma once
#include <cstdint>
#include "AMunitionType_Subsonic.hpp"
class UClass;
class ASpellTool;
struct FHitResult;
class UPrimitiveComponent;
class AActor;
#pragma pack(push, 1)
class AMunitionType_PhoenixSubsonic : public AMunitionType_Subsonic {
public:
    bool bCanOppugnoAfterProtego; // 0x468
    char pad_469[0x7];
    UClass* OppugnoPhysicsObjectClass; // 0x470
    char pad_478[0x8];
    ASpellTool* SpellTool; // 0x480
    static AMunitionType_PhoenixSubsonic* StaticClass();
    ASpellTool* GetSpellTool();
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x488
#pragma pack(pop)

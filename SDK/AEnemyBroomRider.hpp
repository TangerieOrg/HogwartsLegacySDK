#pragma once
#include <cstdint>
#include "AAmbulatory_Character.hpp"
#include "FSpawnSelectInfo.hpp"
class AActor;
#pragma pack(push, 1)
class AEnemyBroomRider : public AAmbulatory_Character {
public:
    TArray<FSpawnSelectInfo> BroomRiders; // 0xcc0
    static AEnemyBroomRider* StaticClass();
    FName OnOverrideCharacterLook(AActor* Actor, FName Name);
}; // Size: 0xcd0
#pragma pack(pop)

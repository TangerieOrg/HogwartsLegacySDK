#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UEnemy_Character_Interface : public UInterface {
public:
    static UEnemy_Character_Interface* StaticClass();
    void MunitionCreated();
    void EventTrackMeleePoints();
    void AttackWindowStop();
    void AttackWindowStart();
    void AttackLeftCollisionStop();
    void AttackLeftCollisionStart();
    void AttackCollisionStop();
    void AttackCollisionStart();
}; // Size: 0x28
#pragma pack(pop)

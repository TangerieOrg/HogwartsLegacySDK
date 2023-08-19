#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FGuid.hpp"
class AAmbulatory_Character;
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class ALockable : public AActor {
public:
    AAmbulatory_Character* OpeningCharacter; // 0x248
    bool IsLocked; // 0x250
    char pad_251[0x7];
    UCognitionStimuliSourceComponent* SharedCognitionStimuliSource; // 0x258
    char pad_260[0x10];
    FGuid Guid; // 0x270
    int32_t SerializedVersion; // 0x280
    char pad_284[0x4];
    static ALockable* StaticClass();
    void Unseal(bool ShowLockWhenLocked, bool Locked, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects);
    void Unlock(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects);
    void SetLocked(bool Locked, bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects);
    void SetIsLocked(bool Locked);
    void Seal(bool ShowLockWhenLocked, bool PlaySoundsAndEffects);
    void RunDoorConstructionScript();
    void Lock(bool PlaySoundsAndEffects);
    bool GetIsLocked();
}; // Size: 0x288
#pragma pack(pop)

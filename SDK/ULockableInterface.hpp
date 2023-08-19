#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class UAkComponent;
class UMeshComponent;
#pragma pack(push, 1)
class ULockableInterface : public UInterface {
public:
    static ULockableInterface* StaticClass();
    void SetAudioSwitch(UAkComponent* AkComponent);
    void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame);
    void OnLocked();
    FVector GetSoundPos();
    UMeshComponent* GetAttachToMesh();
}; // Size: 0x28
#pragma pack(pop)

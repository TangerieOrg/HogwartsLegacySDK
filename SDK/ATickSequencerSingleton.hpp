#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETickSequencerGroup.hpp"
#include "FDynamicBucketGroupStack.hpp"
#include "FTickSequencerUpdateBucketList.hpp"
class UTickSequencerBucketSetup;
class UTickSequencerUpdateComponent;
class UTickSequencerUpdateComponentDelegateUpdate;
#pragma pack(push, 1)
class ATickSequencerSingleton : public AActor {
public:
    UTickSequencerBucketSetup* BucketSetup; // 0x248
    UTickSequencerUpdateComponent* PrePhysicsBuckets; // 0x250
    UTickSequencerUpdateComponent* DuringPhysicsBuckets; // 0x258
    UTickSequencerUpdateComponent* PostPhysicsBuckets; // 0x260
    UTickSequencerUpdateComponent* PostUpdateWorkBuckets; // 0x268
    UTickSequencerUpdateComponentDelegateUpdate* PreActorTickBuckets; // 0x270
    UTickSequencerUpdateComponentDelegateUpdate* PostActorTickBuckets; // 0x278
    FTickSequencerUpdateBucketList DynamicBuckets; // 0x280
    FDynamicBucketGroupStack DynamicBucketGroupStack; // 0x290
    uint32_t LastGetExtraBucketsFrame; // 0x2a0
    ETickSequencerGroup CachedDynamicBucketGroup; // 0x2a4
    bool bUseExternalPostActorTick; // 0x2a5
    char pad_2a6[0x12];
    uint32_t ManualTickFrame; // 0x2b8
    char pad_2bc[0x4];
    static ATickSequencerSingleton* StaticClass();
    void ForceTick();
}; // Size: 0x2c0
#pragma pack(pop)

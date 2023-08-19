#pragma once
#include <cstdint>
#include "FTickSequencerUpdateBucketList.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UTickSequencerUpdateComponent : public UActorComponent {
public:
    FTickSequencerUpdateBucketList Buckets; // 0xc8
    static UTickSequencerUpdateComponent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)

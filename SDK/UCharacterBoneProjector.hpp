#pragma once
#include <cstdint>
#include "FCharacterBoneProjection.hpp"
#include "FCharacterBoneProjectionParams.hpp"
#include "FCharacterBoneProjectionResults.hpp"
#include "FCharacterBoneProjectionState.hpp"
#include "FSimpleBoneInfoCache.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UCharacterBoneProjector : public UObject {
public:
    TArray<FCharacterBoneProjection> Projections; // 0x28
    TArray<FCharacterBoneProjectionState> ProjectionStates; // 0x38
    FCharacterBoneProjectionParams ProjectionParams; // 0x48
    FCharacterBoneProjectionResults ProjectionResults; // 0x4c
    FSimpleBoneInfoCache BoneCache; // 0xa0
    bool bStatesInitialized; // 0x100
    char pad_101[0x7];
    static UCharacterBoneProjector* StaticClass();
    void Update(AActor* Owner, float dt);
    bool StatesInitialized();
    bool InitializeState(AActor* Owner);
}; // Size: 0x108
#pragma pack(pop)

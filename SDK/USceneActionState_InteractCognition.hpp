#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class USceneActionState_InteractCognition : public USceneRigObjectActionState {
public:
    UCognitionStimuliSourceComponent* OwnedCognitionComponent; // 0x70
    char pad_78[0x28];
    static USceneActionState_InteractCognition* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

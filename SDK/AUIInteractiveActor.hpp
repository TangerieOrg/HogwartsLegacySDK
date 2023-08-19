#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class AUIInteractiveActor : public AInteractiveObjectActor {
public:
    UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent; // 0x298
    static AUIInteractiveActor* StaticClass();
    void InteractionInitiated();
}; // Size: 0x2a0
#pragma pack(pop)

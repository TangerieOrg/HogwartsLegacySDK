#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
class UCognitionStimuliSourceComponent;
#pragma pack(push, 1)
class ATransfigurationObjectBase : public AInteractiveObjectActor {
public:
    UCognitionStimuliSourceComponent* CogSourceComponent; // 0x298
    bool bIsPreviewActor; // 0x2a0
    char pad_2a1[0x7];
    static ATransfigurationObjectBase* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)

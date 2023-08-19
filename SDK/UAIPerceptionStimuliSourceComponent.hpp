#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UClass;
#pragma pack(push, 1)
class UAIPerceptionStimuliSourceComponent : public UActorComponent {
public:
    uint8_t bAutoRegisterAsSource : 1; // 0xc8
    uint8_t pad_bitfield_c8_1 : 7;
    char pad_c9[0x7];
    TArray<UClass*> RegisterAsSourceForSenses; // 0xd0
    static UAIPerceptionStimuliSourceComponent* StaticClass();
    void UnregisterFromSense(UClass* SenseClass);
    void UnregisterFromPerceptionSystem();
    void RegisterWithPerceptionSystem();
    void RegisterForSense(UClass* SenseClass);
}; // Size: 0xe0
#pragma pack(pop)

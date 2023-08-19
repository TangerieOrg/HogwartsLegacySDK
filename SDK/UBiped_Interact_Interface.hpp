#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UBTService_AvaAITree;
#pragma pack(push, 1)
class UBiped_Interact_Interface : public UInterface {
public:
    static UBiped_Interact_Interface* StaticClass();
    void Interact(UBTService_AvaAITree* AvaService);
}; // Size: 0x28
#pragma pack(pop)

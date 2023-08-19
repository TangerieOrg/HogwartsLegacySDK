#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECalloutType : uint8_t {
    Interact = 0,
    Interact_Blip_Action = 1,
    Interact_Blip_Action_Descriptor = 2,
    Interact_Blip_Descriptor = 3,
    Interact_NoBlip_Action = 4,
    ECalloutType_MAX = 5,
};
#pragma pack(pop)

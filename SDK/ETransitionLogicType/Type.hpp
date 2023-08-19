#pragma once
#include <cstdint>
namespace ETransitionLogicType {
#pragma pack(push, 1)
enum Type : uint8_t {
    TLT_StandardBlend = 0,
    TLT_Inertialization = 1,
    TLT_Custom = 2,
    TLT_MAX = 3,
};
#pragma pack(pop)
}

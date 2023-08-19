#pragma once
#include <cstdint>
namespace EBroomEnemyState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Follow = 1,
    Lead = 2,
    LeadChangePosition = 3,
    Wait = 4,
    EBroomEnemyState_MAX = 5,
};
#pragma pack(pop)
}

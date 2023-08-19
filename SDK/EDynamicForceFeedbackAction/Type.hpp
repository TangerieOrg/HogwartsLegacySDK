#pragma once
#include <cstdint>
namespace EDynamicForceFeedbackAction {
#pragma pack(push, 1)
enum Type : uint8_t {
    Start = 0,
    Update = 1,
    Stop = 2,
    EDynamicForceFeedbackAction_MAX = 3,
};
#pragma pack(pop)
}

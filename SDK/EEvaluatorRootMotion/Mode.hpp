#pragma once
#include <cstdint>
namespace EEvaluatorRootMotion {
#pragma pack(push, 1)
enum Mode : uint8_t {
    ERM_Standard = 0,
    ERM_NoRootMotion = 1,
    ERM_FullRootMotion = 2,
    ERM_StandardNoRotation = 3,
    ERM_StandardFullRotation = 4,
    ERM_MAX = 5,
};
#pragma pack(pop)
}
